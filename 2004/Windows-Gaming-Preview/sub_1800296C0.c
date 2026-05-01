/*
 * XREFs of sub_1800296C0 @ 0x1800296C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180011B00 @ 0x180011B00 (sub_180011B00.c)
 *     sub_180028E68 @ 0x180028E68 (sub_180028E68.c)
 *     sub_1800295F0 @ 0x1800295F0 (sub_1800295F0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002CC2C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18002E6C8 @ 0x18002E6C8 (sub_18002E6C8.c)
 *     sub_180039484 @ 0x180039484 (sub_180039484.c)
 *     sub_18003AD24 @ 0x18003AD24 (sub_18003AD24.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall sub_1800296C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  int v7; // edx
  struct _RTL_CRITICAL_SECTION *v9; // r15
  __int64 v10; // rdx
  volatile signed __int64 *v11; // rcx
  __int64 *v12; // rdi
  char v13; // r13
  __int64 *j; // rbx
  int v15; // eax
  int v16; // esi
  __int64 **v17; // rax
  __int64 *i; // rax
  __int64 *v19; // rcx
  int v20; // r9d
  int v21; // edx
  void *v22; // rax
  volatile signed __int64 *v23; // rbx
  int v24; // eax
  signed __int64 v25; // rax
  signed __int64 v26; // rtt
  __int128 v27[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)(a2 + 8) )
  {
    v6 = -2147024809;
    v7 = 835;
LABEL_3:
    sub_180003268(retaddr, v7, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 836;
    goto LABEL_3;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v11 = *(volatile signed __int64 **)(a1 + 256);
  if ( v11 && *(_QWORD *)(a1 + 264) )
  {
    v12 = *(__int64 **)a2;
    v13 = 1;
    j = (__int64 *)*v12;
    while ( j != v12 )
    {
      v27[0] = *((_OWORD *)j + 2);
      v15 = sub_180028E68(a1 - 24, v27, j + 6, (__int64)a3);
      v10 = 0LL;
      v16 = v15;
      if ( v15 < 0 )
      {
        v20 = v15;
        v21 = 862;
        goto LABEL_41;
      }
      v17 = (__int64 **)j[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v19 = *v17;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v19 + 25); v19 = (__int64 *)*v19 )
          j = v19;
      }
    }
    goto LABEL_43;
  }
  v13 = 0;
  if ( v11 )
  {
    *(_QWORD *)(a1 + 256) = 0LL;
    sub_180011B00(v11);
  }
  *(_QWORD *)(a1 + 256) = 0LL;
  v22 = operator new(0xD0uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( !v22 )
  {
    v16 = -2147024882;
LABEL_40:
    v20 = v16;
    v21 = 850;
LABEL_41:
    sub_180003268(retaddr, v21, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp", v20);
    goto LABEL_44;
  }
  v23 = (volatile signed __int64 *)sub_18002E6C8(v22);
  sub_18003AD24(v23 + 10, a2);
  std::shared_ptr<__ExceptionPtr>::operator=(v23 + 8, a3);
  v24 = sub_180039484(v23);
  v16 = v24;
  if ( v24 >= 0 )
    v16 = 0;
  else
    sub_180003268(retaddr, 49, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp", v24);
  if ( v16 >= 0 )
  {
    if ( v23 )
    {
      v25 = *((_QWORD *)v23 + 7);
      while ( v25 >= 0 )
      {
        v26 = v25;
        v25 = _InterlockedCompareExchange64(v23 + 7, v25 + 1, v25);
        if ( v26 == v25 )
          goto LABEL_36;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v25 + 16));
    }
LABEL_36:
    *(_QWORD *)(a1 + 256) = v23;
    if ( v23 )
      sub_180011B00(v23);
    v16 = 0;
  }
  else if ( v23 )
  {
    sub_180011B00(v23);
  }
  if ( v16 < 0 )
    goto LABEL_40;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 264, a3);
LABEL_43:
  LOBYTE(v10) = v13;
  sub_1800295F0((_QWORD *)(a1 - 24), v10);
  v16 = 0;
LABEL_44:
  if ( v9 )
    LeaveCriticalSection(v9);
  return (unsigned int)v16;
}
