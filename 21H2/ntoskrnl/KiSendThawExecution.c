/*
 * XREFs of KiSendThawExecution @ 0x14051E250
 * Callers:
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KeThawExecution @ 0x14051DBE0 (KeThawExecution.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229380 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140229400 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     KiSetDebuggerOwner @ 0x14051E414 (KiSetDebuggerOwner.c)
 */

__int64 __fastcall KiSendThawExecution(char a1)
{
  char v2; // al
  __int64 result; // rax
  int v4; // ecx
  struct _KPRCB *v5; // rcx
  __int64 v6; // [rsp+28h] [rbp-89h] BYREF
  unsigned __int16 *v7[2]; // [rsp+30h] [rbp-81h] BYREF
  __int16 v8; // [rsp+40h] [rbp-71h]
  int v9; // [rsp+42h] [rbp-6Fh]
  __int16 v10; // [rsp+46h] [rbp-6Bh]
  _QWORD v11[22]; // [rsp+48h] [rbp-69h] BYREF

  LODWORD(v6) = 0;
  v9 = 0;
  v10 = 0;
  memset(&v11[1], 0, 0xA0uLL);
  KeGetCurrentPrcb()->IpiFrozen = 0;
  KiSetDebuggerOwner(0LL);
  if ( (KiBugCheckActive & 3) != 0 )
  {
    v2 = 1;
    LODWORD(v6) = (unsigned int)KiBugCheckActive >> 4;
  }
  else
  {
    v2 = 0;
  }
  if ( KiRecoveryInProgress )
    v2 = 0;
  if ( !v2 || (result = (__int64)KeGetCurrentPrcb(), (_DWORD)v6 != *(_DWORD *)(result + 36)) || KiResumeForReboot )
  {
    result = (unsigned int)KeNumberProcessors_0;
    if ( (unsigned int)KeNumberProcessors_0 >= 2 && !PoAllProcIntrDisabled )
    {
      LODWORD(v11[0]) = 1310721;
      memset((char *)v11 + 4, 0, 0xA4uLL);
      LODWORD(v6) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v4 = v6;
        do
        {
          v5 = (struct _KPRCB *)KiProcessorBlock[v4];
          if ( v5 != KeGetCurrentPrcb() )
          {
            if ( (v5->IpiFrozen & 0xF) == 2 )
            {
              v5->IpiFrozen = 3;
              if ( a1 )
                KeAddProcessorAffinityEx(v11, v6);
            }
            else
            {
              v5->IpiFrozen = 0;
            }
          }
          LODWORD(v6) = v6 + 1;
          v4 = v6;
        }
        while ( (unsigned int)v6 < (unsigned int)KeNumberProcessors_0 );
      }
      v7[1] = (unsigned __int16 *)v11[1];
      v7[0] = (unsigned __int16 *)v11;
      v8 = 0;
      while ( 1 )
      {
        result = KeEnumerateNextProcessor(&v6, v7);
        if ( (_DWORD)result )
          break;
        while ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v6] + 11656) == 3 )
          _mm_pause();
      }
    }
  }
  return result;
}
