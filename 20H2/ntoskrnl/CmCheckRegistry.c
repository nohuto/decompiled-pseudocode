/*
 * XREFs of CmCheckRegistry @ 0x1405DF080
 * Callers:
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405DE58C (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 *     SetFailureLocation @ 0x1403238E8 (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1405E14A0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140672DC0 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  char v8; // si
  unsigned int v9; // ebx
  unsigned int v10; // r15d
  unsigned int *v11; // rax
  int v12; // eax
  int v13; // eax
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-49h]
  int v17; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  __int128 v19; // [rsp+58h] [rbp-11h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h]
  __int128 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+1Fh]
  int v23; // [rsp+D8h] [rbp+6Fh]
  int v24; // [rsp+E8h] [rbp+7Fh]

  v23 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  v22 = 0LL;
  p_BitMapHeader = 0LL;
  v17 = 0;
  v19 = 0LL;
  v8 = 0;
  v20 = 0LL;
  v21 = 0LL;
  if ( (PVOID)a1 == CmpMasterHive )
    return v3;
  v9 = *(_DWORD *)(a1 + 272) >> 3;
  v10 = (((v9 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v11 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v10, 0LL, 1649167683LL);
    v6 = v11;
    if ( !v11 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v9;
    BitMapHeader.Buffer = v11;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    a2 = v23;
  }
  v12 = a2 & 0x10000;
  v24 = a2 & 0x10000;
  while ( 1 )
  {
    if ( v12 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v13 = HvCheckHive(a1, a2, a3, (_DWORD)p_BitMapHeader, (__int64)&v19, a3);
      v3 = v13;
      if ( v13 < 0 )
      {
        v16 = 16;
        goto LABEL_30;
      }
      if ( (int)v19 + (int)v20 + (int)v21 > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(a1 + 4152) |= 0x400u;
      *(_QWORD *)(a1 + 4792) = v22;
    }
    if ( *(int *)(*(_QWORD *)(a1 + 64) + 36LL) < 0 )
      break;
    v13 = CmpValidateHiveSecurityDescriptors(a1, a3);
    v3 = v13;
    if ( v13 >= 0 )
      goto LABEL_15;
    if ( v13 == -2147483606 )
    {
      v8 = 1;
LABEL_15:
      v13 = CmpCheckRegistry2(a1, v23, 0, p_BitMapHeader, a3, (__int64)&v17);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_16;
      if ( v13 == -2147483606 )
      {
        v8 = 1;
LABEL_16:
        *(_DWORD *)(a1 + 4804) = v17;
        v3 = v8 != 0 ? 0x8000002A : 0;
        goto LABEL_17;
      }
      if ( v13 != -1073741267 )
      {
        v16 = 64;
        goto LABEL_30;
      }
      goto LABEL_25;
    }
    if ( v13 != -1073741267 )
    {
      v16 = 48;
LABEL_30:
      v15 = v13;
      goto LABEL_33;
    }
LABEL_25:
    v12 = v24;
    v8 = 1;
    a2 = v23;
  }
  v3 = -1073741492;
  v16 = 32;
  v15 = -1073741492;
LABEL_33:
  SetFailureLocation(a3, 0, 11, v15, v16);
LABEL_17:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v6, v10);
  return v3;
}
