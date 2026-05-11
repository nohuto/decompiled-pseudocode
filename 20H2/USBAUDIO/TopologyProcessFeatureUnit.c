/*
 * XREFs of TopologyProcessFeatureUnit @ 0x1C0026160
 * Callers:
 *     <none>
 * Callees:
 *     Feature_Servicing_AudioRegressionFix__private_IsEnabled @ 0x1C0003138 (Feature_Servicing_AudioRegressionFix__private_IsEnabled.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0013800 (memset.c)
 */

__int64 __fastcall TopologyProcessFeatureUnit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  _DWORD *v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  NTSTATUS v9; // edi
  unsigned int *v10; // rdx
  int v11; // ebp
  __int64 v12; // r14
  int v13; // r15d
  unsigned int v14; // r13d
  int v15; // r12d
  unsigned int *v16; // r11
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  int v19; // esi
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  unsigned __int64 v25; // r8
  int v26; // eax
  unsigned int v27; // ecx
  __int64 (__fastcall *v28)(); // rax
  __int64 v29; // r12
  unsigned __int64 v30; // rax
  size_t v31; // rsi
  PVOID PoolWithTag; // rax
  __int64 v33; // rbp
  int v34; // esi
  __int64 v35; // r14
  __int64 v36; // r12
  _DWORD *v37; // r8
  GUID *v38; // rax
  __int64 result; // rax
  int v40; // [rsp+20h] [rbp-88h]
  int v41; // [rsp+24h] [rbp-84h]
  unsigned int *v42; // [rsp+28h] [rbp-80h]
  __int64 v43; // [rsp+30h] [rbp-78h]
  int v44; // [rsp+38h] [rbp-70h]
  __int64 v45; // [rsp+40h] [rbp-68h]
  __int64 v46; // [rsp+48h] [rbp-60h]
  unsigned __int64 v47; // [rsp+50h] [rbp-58h]
  unsigned int v51; // [rsp+C8h] [rbp+20h]

  v6 = a6;
  v7 = a3;
  v8 = a2;
  v9 = 0;
  v10 = a5;
  v11 = *a6;
  v12 = *(_QWORD *)(v8 + 72);
  v13 = *(_DWORD *)(v8 + 68);
  v14 = *a5;
  v15 = *(_DWORD *)(v8 + 28);
  v16 = (unsigned int *)(a4 + 16LL * *a6);
  v51 = *a5;
  v17 = **(_DWORD **)(v8 + 56);
  v43 = v12;
  v41 = v15;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
      {
LABEL_67:
        v6 = a6;
        v10 = a5;
        goto LABEL_68;
      }
      v18 = 0;
      v19 = v13 - (v13 & (v13 - 1));
      v40 = v19;
      v13 &= v13 - 1;
      v20 = 168LL * v14 + v7;
      *(_DWORD *)(v20 + 88) = 0;
      v21 = 0LL;
      do
      {
        if ( (v19 & *(_DWORD *)(v12 + 4 * v21)) != 0 )
        {
          ++v18;
          v22 = 2 * v15 + 1;
          v23 = v22 & (2 * v15);
          v24 = v22 - v23;
          if ( v21 )
          {
            v25 = v21;
            do
            {
              v26 = v23;
              v23 &= v23 - 1;
              v24 = v26 - v23;
              --v25;
            }
            while ( v25 );
            v8 = a2;
          }
          *(_DWORD *)(v20 + 88) |= v24;
        }
        ++v21;
      }
      while ( v21 <= *(unsigned int *)(*(_QWORD *)(v8 + 56) + 4LL) );
      v27 = 0;
      *(_DWORD *)(v20 + 80) = *(_DWORD *)(v8 + 16);
      ++v11;
      *(_DWORD *)(v20 + 92) = v18;
      v16[1] = 0;
      *v16 = v17;
      v16[2] = v14;
      v16[3] = 1;
      v16 += 4;
      v42 = v16;
      v44 = v11;
      if ( v19 == 2048 )
        v27 = 16;
      if ( v19 == 512 )
        v27 = 14;
      if ( v19 == 256 )
        v27 = 13;
      if ( v19 == 128 )
        v27 = 12;
      if ( v19 == 1024 )
        v27 = 15;
      if ( v19 == 64 )
        v27 = 11;
      if ( v19 == 32 )
        v27 = 10;
      if ( v19 == 16 )
        v27 = 9;
      if ( v19 == 2 )
        v27 = 8;
      if ( v19 == 1 )
        v27 = 7;
      if ( v27 == 7 )
        break;
      if ( v27 <= 7 )
        goto LABEL_39;
      if ( v27 <= 0xB )
      {
        *(_QWORD *)(v20 + 136) = USBCntrlGetSetDbLevel;
        v28 = USBCntrlRestoreDbLevel;
        goto LABEL_38;
      }
      if ( v27 == 12 )
      {
        *(_QWORD *)(v20 + 136) = USBCntrlGetSetGEQ;
        goto LABEL_40;
      }
      if ( ((v27 - 13) & 0xFFFFFFFC) == 0 && v27 != 14 )
        break;
LABEL_39:
      if ( !v27 )
      {
        v9 = -1073741438;
        goto LABEL_66;
      }
LABEL_40:
      *(_DWORD *)(v20 + 76) = v27;
      v29 = v18;
      v45 = 4LL * v27;
      v47 = v18;
      *(_QWORD *)(v20 + 8) = NodeDescriptorInfo[v45];
      *(_QWORD *)(v20 + 16) = NodeDescriptorInfo[v45 + 1];
      v30 = LODWORD(NodeDescriptorInfo[v45 + 2]) * (unsigned __int64)v18;
      v46 = LODWORD(NodeDescriptorInfo[v45 + 2]);
      if ( v30 > 0xFFFFFFFF )
      {
        LODWORD(v30) = -1;
        v9 = -1073741306;
      }
      if ( v9 < 0 )
        goto LABEL_64;
      v31 = (unsigned int)v30;
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, (unsigned int)v30, 0x41627845u);
      *(_QWORD *)(v20 + 128) = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (unsigned int)Feature_Servicing_AudioRegressionFix__private_IsEnabled() )
          memset(*(void **)(v20 + 128), 0, v31);
        *(_DWORD *)(v20 + 96) = 0;
        v33 = 0LL;
        v34 = *(_DWORD *)(v20 + 88);
        v35 = -1LL;
        if ( v29 )
        {
          v36 = 0LL;
          while ( v9 >= 0 )
          {
            v37 = (_DWORD *)(v36 + *(_QWORD *)(v20 + 128));
            do
              ++v35;
            while ( (v40 & *(_DWORD *)(v43 + 4 * v35)) == 0 );
            *v37 = v33;
            v37[2] = v35;
            v37[1] = (v34 - (v34 & (unsigned int)(v34 - 1))) >> 1;
            v34 &= v34 - 1;
            v38 = NodeDescriptorInfo[v45 + 3];
            if ( v38 )
              v9 = ((__int64 (__fastcall *)(__int64, __int64))v38)(a1, v20);
            if ( v9 >= 0 )
              *(_DWORD *)(v20 + 96) |= 1 << v33;
            v36 += v46;
            if ( ++v33 >= v47 )
              goto LABEL_59;
          }
LABEL_61:
          ExFreePool(*(PVOID *)(v20 + 128));
        }
        else
        {
LABEL_59:
          if ( v9 < 0 )
            goto LABEL_61;
          v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v20 + 128), ExFreePool);
          if ( v9 < 0 )
            goto LABEL_61;
        }
        v12 = v43;
        v11 = v44;
        goto LABEL_63;
      }
      v9 = -1073741670;
LABEL_63:
      v8 = a2;
      v16 = v42;
LABEL_64:
      v15 = v41;
      v17 = v51 | 0x80000000;
      v14 = ++v51;
LABEL_66:
      v7 = a3;
      if ( !v13 )
        goto LABEL_67;
    }
    *(_QWORD *)(v20 + 136) = USBCntrlGetSetBoolean;
    v28 = USBCntrlRestoreBoolean;
LABEL_38:
    *(_QWORD *)(v20 + 160) = v28;
    goto LABEL_39;
  }
LABEL_68:
  *v10 = v14;
  result = (unsigned int)v9;
  *v6 = v11;
  return result;
}
