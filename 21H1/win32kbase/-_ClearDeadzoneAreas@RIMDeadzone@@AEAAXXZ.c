/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01767A0
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01762A4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z @ 0x1C01764DC (-IsInDeadzone@RIMDeadzone@@QEAAHUtagRECT@@UtagPOINT@@1W4tagHANDEDNESS@@@Z.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01766E4 (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this, __int64 a2, __int64 a3)
{
  bool v4; // zf
  __int64 v5; // rdx
  __int64 i; // rdi
  __int64 v7; // rcx

  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v4 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 3);
    if ( v5 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      {
        v5 = *((_QWORD *)this + 3);
        v7 = *(_QWORD *)(v5 + 24 * i + 8);
        if ( v7 )
        {
          Win32FreePool(v7, v5, a3);
          v5 = *((_QWORD *)this + 3);
        }
      }
      Win32FreePool(v5, v5, a3);
    }
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
