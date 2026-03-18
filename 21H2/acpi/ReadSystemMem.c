/*
 * XREFs of ReadSystemMem @ 0x1C001B2D0
 * Callers:
 *     WriteFieldObj @ 0x1C001A310 (WriteFieldObj.c)
 *     AccessBaseField @ 0x1C001AE70 (AccessBaseField.c)
 *     ReadBuffField @ 0x1C001CA14 (ReadBuffField.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 */

__int64 __fastcall ReadSystemMem(unsigned __int64 Src, size_t Size, __int64 a3)
{
  size_t v5; // rbx
  int v6; // ebx
  __int64 v7; // rax
  int v9; // ebx
  int v10; // ebx
  int (__fastcall *v11)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0;
  v13 = 0LL;
  v5 = (unsigned int)Size;
  if ( (unsigned int)Size <= 8 )
  {
    if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
      || (v11 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
      || v11(0LL, Src, &v13, (unsigned int)Size, &v12) < 0 )
    {
      if ( !(Src % v5) )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v9 = v6 - 1;
          if ( v9 )
          {
            v10 = v9 - 2;
            if ( v10 )
            {
              if ( v10 == 4 )
                v7 = *(_QWORD *)Src;
              else
                v7 = -1LL;
            }
            else
            {
              v7 = *(unsigned int *)Src;
            }
          }
          else
          {
            v7 = *(unsigned __int16 *)Src;
          }
        }
        else
        {
          v7 = *(unsigned __int8 *)Src;
        }
        return a3 & v7;
      }
      memmove(&v13, (const void *)Src, v5);
    }
    v7 = v13;
    return a3 & v7;
  }
  return -1LL;
}
