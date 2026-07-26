/*
 * XREFs of KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___ @ 0x1C01233E8
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f____0 @ 0x1C01235D8 (KRegKey--QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a07_ea_1C01235D8.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C010B8C0 (--_V@YAXPEAX@Z.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x1C0123AD0 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?append@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z @ 0x1C0123F78 (-append@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_NAEBQEAU_KStringAtom@2@@Z.c)
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01256A0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz__lambda_145828208f54867cbf19e2ec96475ca0___lambda_669a078cee999b45033530b9c5ed1c6f___(
        HANDLE *a1,
        _UNICODE_STRING *a2)
{
  HANDLE v4; // rcx
  _BYTE *v5; // rsi
  _BYTE *v6; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  _BYTE *PoolWithTag; // rax
  __int64 v10; // rax
  _WORD *v11; // rdi
  unsigned int v12; // r8d
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  _WORD *v16; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  __int64 Atom; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  v4 = *a1;
  ResultLength = 0;
  v5 = KeyValueInformation;
  v6 = 0LL;
  v7 = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v8 = v7;
  if ( v7 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    v6 = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_3:
      v8 = -1073741670;
      goto LABEL_17;
    }
    v8 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, PoolWithTag, ResultLength, &ResultLength);
    if ( v8 < 0 )
      goto LABEL_17;
    v5 = v6;
  }
  else if ( v7 < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v5 + 1) != 7 )
  {
    v8 = -1073741788;
    goto LABEL_17;
  }
  v10 = *((unsigned int *)v5 + 2);
  if ( (v10 & 1) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  v11 = v5 + 12;
  v12 = 0;
  v13 = v5 + 12;
  v14 = (unsigned __int64)&v5[v10 + 12];
  if ( (unsigned __int64)(v5 + 12) >= v14 )
    goto LABEL_16;
LABEL_12:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        ++v12;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v8 = -1073741789;
    goto LABEL_17;
  }
  if ( !(unsigned __int8)Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((char *)qword_1C00E4498 + 72, v12 + 4LL) )
    goto LABEL_3;
  while ( *v11 )
  {
    v16 = v11;
    do
      ++v16;
    while ( *v16 );
    Atom = Rtl::KStringAtomTableBase<1>::GetAtom(qword_1C00E4498, v11);
    if ( !Atom )
      goto LABEL_3;
    Rtl::KArray<Rtl::_KStringAtom *,1>::append((char *)qword_1C00E4498 + 72, &Atom);
    v11 = v16 + 1;
  }
  v8 = 0;
LABEL_17:
  if ( v6 )
    operator delete[](v6);
  return (unsigned int)v8;
}
