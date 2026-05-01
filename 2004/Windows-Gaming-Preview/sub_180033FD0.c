/*
 * XREFs of sub_180033FD0 @ 0x180033FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001602C @ 0x18001602C (sub_18001602C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180033FD0(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    return 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &xmmword_180050E58, &v14);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( v14 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 72) + 168LL);
      EnterCriticalSection(v6);
      v7 = *(_QWORD *)(a1 + 72);
      v8 = *(_QWORD *)(v7 + 208);
      if ( v8 )
      {
        *(_QWORD *)(v7 + 208) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        v7 = *(_QWORD *)(a1 + 72);
      }
      v9 = *(_QWORD *)(v7 + 216);
      if ( v9 )
      {
        *(_QWORD *)(v7 + 216) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 224LL);
      if ( v10 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v14);
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v4 = 0;
      goto LABEL_17;
    }
    return 0;
  }
  sub_180003268(retaddr, 539, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v3);
  v5 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_17:
  if ( v4 < 0 )
    sub_18001602C((unsigned int)v4);
  return (unsigned int)v4;
}
