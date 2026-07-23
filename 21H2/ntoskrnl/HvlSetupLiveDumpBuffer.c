/*
 * XREFs of HvlSetupLiveDumpBuffer @ 0x1404FB930
 * Callers:
 *     HvlPrepareLivedumpDescriptor @ 0x1404F8E34 (HvlPrepareLivedumpDescriptor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 */

__int64 __fastcall HvlSetupLiveDumpBuffer(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r12
  PHYSICAL_ADDRESS **v17; // rcx
  PHYSICAL_ADDRESS *v18; // r14
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  _QWORD *v20; // r8
  unsigned __int64 v21; // rax
  char *v22; // r15
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  PHYSICAL_ADDRESS **v26; // rcx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r13
  PHYSICAL_ADDRESS *v29; // rbx
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r15
  char *v32; // r14
  PHYSICAL_ADDRESS **v33; // r12
  void **v34; // rsi
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r14
  PHYSICAL_ADDRESS *v37; // rdi
  unsigned __int64 v38; // r15
  char **v39; // r13
  char *v40; // rbx
  void **v41; // [rsp+20h] [rbp-78h]
  unsigned __int64 v42; // [rsp+28h] [rbp-70h]
  unsigned __int64 v43; // [rsp+30h] [rbp-68h]
  unsigned __int64 v44; // [rsp+48h] [rbp-50h]
  PHYSICAL_ADDRESS **v45; // [rsp+50h] [rbp-48h]
  unsigned __int64 v46; // [rsp+58h] [rbp-40h]
  __int64 v47; // [rsp+60h] [rbp-38h]
  unsigned __int64 v49; // [rsp+D0h] [rbp+38h]
  PHYSICAL_ADDRESS **v50; // [rsp+D0h] [rbp+38h]

  v6 = a3;
  v7 = a3 * (unsigned __int64)a2;
  if ( v7 < 5 )
    return 3221225507LL;
  v9 = v7 - 2;
  v10 = v9 / 0x40201;
  if ( v9 / 0x40201 >= 0x200 )
    v10 = 512LL;
  v11 = v10 << 9;
  v42 = v10 << 9;
  v12 = v10 << 18;
  v49 = v10 << 18;
  v13 = v9 - 262657 * v10;
  if ( v13 >= 3 && v10 < 0x200 )
  {
    v14 = v13 - 1;
    ++v10;
    v11 += v14 / 0x201;
    v12 += (v14 / 0x201) << 9;
    v42 = v11;
    v49 = v12;
    v15 = v14 % 0x201;
    if ( v15 >= 2 )
    {
      ++v11;
      v12 = v15 + v12 - 1;
      v42 = v11;
      v49 = v12;
    }
  }
  *a4 = v10 + 2;
  v44 = v10 + 2;
  v46 = v10 + 2 + v11;
  *a5 = v46;
  v47 = *a1;
  *(_DWORD *)(v47 + 8) = 3;
  *(_QWORD *)v47 = v12;
  v16 = 1 % v6;
  v17 = (PHYSICAL_ADDRESS **)&a1[1 / v6];
  v18 = &(*v17)[512 * (1 % v6)];
  v45 = v17;
  PhysicalAddress = MmGetPhysicalAddress(v18);
  v20 = a1;
  *(_QWORD *)(v47 + 16) = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
  v21 = 2 / v6;
  v43 = 2 % v6;
  v22 = (char *)(a1[2 / v6] + ((2 % v6) << 12));
  v41 = (void **)&a1[2 / v6];
  if ( v10 )
  {
    v23 = 0LL;
    v24 = 2 % v6;
    do
    {
      *v18 = MmGetPhysicalAddress(v22);
      v22 += 4096;
      ++v18;
      if ( (++v23 & 0x1FF) == 0 && !(++v16 % v6) )
      {
        ++v45;
        v16 = 0LL;
        v18 = *v45;
      }
      v25 = (v24 + 1) % v6;
      if ( !v25 )
        v22 = (char *)*++v41;
      v24 = (v24 + 1) & -(__int64)(v25 != 0);
    }
    while ( v23 < v10 );
    v11 = v42;
    v12 = v49;
    v20 = a1;
    v21 = 2 / v6;
  }
  v26 = (PHYSICAL_ADDRESS **)&v20[v21];
  v27 = v44 / v6;
  v28 = 0LL;
  v29 = &(*v26)[512 * (2 % v6)];
  v30 = v44 % v6;
  v31 = v44 % v6;
  v32 = (char *)(v20[v44 / v6] + ((v44 % v6) << 12));
  if ( v11 )
  {
    v33 = v26;
    v34 = (void **)&v20[v44 / v6];
    do
    {
      *v29 = MmGetPhysicalAddress(v32);
      v32 += 4096;
      ++v29;
      if ( (++v28 & 0x1FF) == 0 && !(++v43 % v6) )
      {
        ++v33;
        v43 = 0LL;
        v29 = *v33;
      }
      v35 = (v31 + 1) % v6;
      if ( !v35 )
        v32 = (char *)*++v34;
      v31 = (v31 + 1) & -(__int64)(v35 != 0);
    }
    while ( v28 < v11 );
    v12 = v49;
    v30 = v44 % v6;
    v20 = a1;
    v27 = v44 / v6;
  }
  v36 = 0LL;
  v37 = (PHYSICAL_ADDRESS *)(v20[v27] + (v30 << 12));
  v38 = v46 % v6;
  v50 = (PHYSICAL_ADDRESS **)&v20[v27];
  v39 = (char **)&v20[v46 / v6];
  v40 = &(*v39)[4096 * (v46 % v6)];
  while ( v36 < v12 )
  {
    *v37 = MmGetPhysicalAddress(v40);
    v40 += 4096;
    ++v37;
    if ( (++v36 & 0x1FF) == 0 && !(++v30 % v6) )
    {
      ++v50;
      v30 = 0LL;
      v37 = *v50;
    }
    if ( !(++v38 % v6) )
    {
      if ( v36 >= v12 )
        break;
      ++v39;
      v38 = 0LL;
      v40 = *v39;
    }
  }
  *a6 = v47;
  return 0LL;
}
