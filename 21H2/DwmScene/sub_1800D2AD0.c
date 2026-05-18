/*
 * XREFs of sub_1800D2AD0 @ 0x1800D2AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_180067F94 @ 0x180067F94 (sub_180067F94.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800D2C78 @ 0x1800D2C78 (sub_1800D2C78.c)
 *     sub_1800D3404 @ 0x1800D3404 (sub_1800D3404.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800D2AD0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 *v6; // r8
  __int64 *v7; // rcx
  __int64 *v8; // rdx
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2);
  if ( !(_BYTE)v4 && a1[17] )
  {
    v5 = sub_18007040C(*a2);
    v6 = (__int64 *)a1[15];
    v7 = v6;
    v8 = (__int64 *)v6[1];
    if ( *((_BYTE *)v8 + 25) )
      goto LABEL_10;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= v5 )
      {
        v7 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
    if ( v7 == v6 || v5 < *((_DWORD *)v7 + 8) )
LABEL_10:
      v7 = (__int64 *)a1[15];
    if ( v7 == v6 )
    {
      sub_1800D2C78(a1, a2);
    }
    else if ( !sub_180067F94((__int64)a1, v5) )
    {
      sub_1800D3404(a1, *a2);
    }
    LOBYTE(v4) = sub_180067F88((__int64)a1, 8);
    if ( (_BYTE)v4 )
    {
      v4 = a1[14];
      if ( v4 )
        LODWORD(v4) = *(_DWORD *)(v4 + 24);
      if ( (_DWORD)v4 != 2 )
      {
        *(_OWORD *)v12 = 0LL;
        LOBYTE(v4) = (unsigned __int8)std::shared_ptr<__ExceptionPtr>::operator=(a1 + 17, v12);
        if ( v12[1] )
        {
          LODWORD(v4) = _InterlockedExchangeAdd((volatile signed __int32 *)(v12[1] + 8), 0xFFFFFFFF);
          v9 = (_DWORD)v4 == 1;
          LOBYTE(v4) = v4 - 1;
          if ( v9 )
          {
            v10 = v12[1];
            (**(void (__fastcall ***)(__int64))v12[1])(v12[1]);
            LODWORD(v4) = _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
            if ( !(_DWORD)v4 )
              LOBYTE(v4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
          }
        }
      }
    }
  }
  return v4;
}
