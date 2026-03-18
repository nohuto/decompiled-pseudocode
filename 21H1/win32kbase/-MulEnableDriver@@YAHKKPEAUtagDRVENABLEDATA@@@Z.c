/*
 * XREFs of ?MulEnableDriver@@YAHKKPEAUtagDRVENABLEDATA@@@Z @ 0x1C014B590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MulEnableDriver(__int64 a1, __int64 a2, struct tagDRVENABLEDATA *a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  _OWORD *v6; // rax
  char *v7; // rdx
  __int64 v8; // r8
  __int64 result; // rax
  unsigned int v10; // [rsp+40h] [rbp+18h] BYREF
  _OWORD *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( RtlRunOnceBeginInitialize(&gMulEnableDriverInit, 0, 0LL) == 259 )
  {
    if ( ext_ms_win_moderncore_win32k_base_ntgdi_l1 )
      v4 = ext_ms_win_moderncore_win32k_base_ntgdi_l1();
    else
      v4 = -1073741637;
    if ( v4 >= 0 )
    {
      v11 = 0LL;
      v5 = 0;
      v10 = 0;
      if ( qword_1C0256ED8 )
      {
        qword_1C0256ED8(&v11, &v10);
        v5 = v10;
        if ( v10 )
        {
          v6 = v11;
          v7 = (char *)(&unk_1C024C680 - (_UNKNOWN *)v11);
          v8 = v10;
          do
          {
            *(_OWORD *)((char *)v6 + (_QWORD)v7) = *v6;
            ++v6;
            --v8;
          }
          while ( v8 );
        }
      }
      gcdrvfnMulti += v5;
    }
    RtlRunOnceComplete(&gMulEnableDriverInit, 0, 0LL);
  }
  a3->iDriverVersion = 196608;
  a3->pdrvfn = (DRVFN *)&gadrvfnMulti;
  result = 1LL;
  a3->c = gcdrvfnMulti;
  return result;
}
