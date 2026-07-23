/*
 * XREFs of IopSetupArbiterAndTranslators @ 0x140751FDC
 * Callers:
 *     IopResourceRequirementsListToReqList @ 0x140751A14 (IopResourceRequirementsListToReqList.c)
 * Callees:
 *     IopFindResourceHandlerInfo @ 0x1407523BC (IopFindResourceHandlerInfo.c)
 *     IopFindLegacyBusDeviceNode @ 0x14075244C (IopFindLegacyBusDeviceNode.c)
 *     IopCallArbiter @ 0x1407524A4 (IopCallArbiter.c)
 *     IopQueryResourceHandlerInterface @ 0x14075258C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x1407C2E24 (IopTranslateAndAdjustReqDesc.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopSetupArbiterAndTranslators(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  char v5; // r12
  char v6; // r13
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // si
  unsigned int v10; // eax
  char v11; // r11
  _QWORD *LegacyBusDeviceNode; // rbx
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // r9
  __int64 result; // rax
  __int16 v18; // di
  int v19; // eax
  __int16 v20; // di
  int v21; // eax
  char *v22; // rax
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rax
  PVOID *v26; // rcx
  char v27; // dl
  char v28; // cl
  __int64 v29; // rdi
  unsigned __int64 PoolWithTag; // rax
  PVOID *v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 v34; // [rsp+38h] [rbp-20h] BYREF
  __int64 v35; // [rsp+40h] [rbp-18h]
  char v36; // [rsp+A0h] [rbp+48h]
  char v37; // [rsp+A8h] [rbp+50h]
  __int64 v38; // [rsp+B0h] [rbp+58h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+60h] BYREF

  v4 = *((_QWORD *)a1 + 9);
  v5 = 0;
  v39 = 0LL;
  v6 = 0;
  v35 = v4;
  v7 = *((_QWORD *)a1 + 4);
  v34 = 0LL;
  v37 = 1;
  v33 = 0LL;
  v8 = *(_QWORD *)(v7 + 64);
  v38 = 0LL;
  v9 = *(_BYTE *)(v8 + 1);
  v10 = a1[20];
  if ( v9 == 7 )
    v9 = 3;
  if ( v10 != 1 || (v11 = 1, *a1) )
    v11 = 0;
  v36 = v11;
  if ( !v4 || v10 == 1 )
    LegacyBusDeviceNode = IopRootDeviceNode;
  else
    LegacyBusDeviceNode = *(_QWORD **)(*(_QWORD *)(v4 + 312) + 40LL);
  if ( !LegacyBusDeviceNode )
    return 3221225610LL;
  while ( 1 )
  {
    if ( LegacyBusDeviceNode != IopRootDeviceNode || v6 || v11 )
    {
      if ( v5 )
        goto LABEL_17;
      v13 = LegacyBusDeviceNode[4];
      if ( v13 == v4 )
        goto LABEL_17;
      LOBYTE(a3) = v9;
      if ( (unsigned __int8)IopFindResourceHandlerInfo(2LL, LegacyBusDeviceNode, a3, &v39) )
        goto LABEL_13;
      if ( (unsigned __int8)v9 > 0xFu )
        v20 = 0;
      else
        v20 = 1 << v9;
      v21 = IopQueryResourceHandlerInterface(2LL, v13, a3, &v38);
      *((_WORD *)LegacyBusDeviceNode + 263) |= v20;
      if ( v21 >= 0 )
      {
        v32 = v38;
      }
      else
      {
        *((_WORD *)LegacyBusDeviceNode + 262) |= v20;
        if ( (unsigned __int8)v9 <= 0xFu )
        {
LABEL_13:
          v14 = v39;
LABEL_14:
          if ( v14 )
          {
            v5 = 1;
            if ( (*(_DWORD *)(*(_QWORD *)(v14 + 24) + 40LL) & 1) != 0 && (int)IopCallArbiter(v14, 7LL) < 0 )
            {
              v5 = 0;
            }
            else
            {
              *((_QWORD *)a1 + 36) = v14;
              *(_WORD *)(v14 + 104) = 0;
            }
          }
LABEL_17:
          if ( !v37 )
          {
LABEL_24:
            LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
            v11 = v36;
            goto LABEL_25;
          }
          LOBYTE(a3) = v9;
          if ( (unsigned __int8)IopFindResourceHandlerInfo(1LL, LegacyBusDeviceNode, a3, &v33) )
            goto LABEL_19;
          if ( (unsigned __int8)v9 > 0xFu )
            v18 = 0;
          else
            v18 = 1 << v9;
          v19 = IopQueryResourceHandlerInterface(1LL, LegacyBusDeviceNode[4], a3, &v38);
          *((_WORD *)LegacyBusDeviceNode + 261) |= v18;
          if ( v19 >= 0 )
          {
            v29 = v38;
          }
          else
          {
            *((_WORD *)LegacyBusDeviceNode + 260) |= v18;
            if ( (unsigned __int8)v9 <= 0xFu )
            {
LABEL_19:
              v15 = v33;
LABEL_20:
              if ( v15 )
                v6 = 1;
              if ( !v5 && v15 )
              {
                result = IopTranslateAndAdjustReqDesc(*((_QWORD *)a1 + 4), v15, &v34);
                if ( (int)result < 0 )
                  return result;
                a3 = v34;
                v27 = *(_BYTE *)(*(_QWORD *)(v34 + 64) + 1LL);
                *(_QWORD *)(v34 + 32) = *((_QWORD *)a1 + 4);
                v9 = v27;
                if ( v27 == 7 )
                  v9 = 3;
                v28 = v37;
                *((_QWORD *)a1 + 4) = a3;
                if ( (_DWORD)result == 288 )
                  v28 = 0;
                v37 = v28;
              }
              goto LABEL_24;
            }
            v29 = 0LL;
            v38 = 0LL;
          }
          PoolWithTag = (unsigned __int64)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20207050u);
          if ( !PoolWithTag )
            return 3221225626LL;
          *(_BYTE *)(PoolWithTag + 16) = v9;
          *(_QWORD *)(PoolWithTag + 8) = PoolWithTag;
          *(_QWORD *)PoolWithTag = PoolWithTag;
          *(_QWORD *)(PoolWithTag + 24) = v29;
          *(_QWORD *)(PoolWithTag + 32) = LegacyBusDeviceNode;
          v31 = (PVOID *)LegacyBusDeviceNode[64];
          if ( *v31 != LegacyBusDeviceNode + 63 )
            goto LABEL_68;
          *(_QWORD *)(PoolWithTag + 8) = v31;
          *(_QWORD *)PoolWithTag = LegacyBusDeviceNode + 63;
          *v31 = (PVOID)PoolWithTag;
          v15 = PoolWithTag & -(__int64)(v29 != 0);
          LegacyBusDeviceNode[64] = PoolWithTag;
          v33 = v15;
          goto LABEL_20;
        }
        v32 = 0LL;
        v38 = 0LL;
      }
      v22 = (char *)ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x20207050u);
      v23 = (unsigned __int64)v22;
      if ( !v22 )
        return 3221225626LL;
      *((_WORD *)v22 + 52) = 0;
      *((_QWORD *)v22 + 12) = v22 + 88;
      *((_QWORD *)v22 + 11) = v22 + 88;
      *((_QWORD *)v22 + 10) = v22 + 72;
      *((_QWORD *)v22 + 9) = v22 + 72;
      v24 = v22 + 40;
      *((_QWORD *)v22 + 6) = v22 + 40;
      v25 = v22 + 56;
      *v24 = v24;
      v25[1] = v25;
      *v25 = v25;
      *(_QWORD *)(v23 + 8) = v23;
      *(_QWORD *)v23 = v23;
      *(_BYTE *)(v23 + 16) = v9;
      *(_QWORD *)(v23 + 32) = LegacyBusDeviceNode;
      v26 = (PVOID *)LegacyBusDeviceNode[62];
      if ( *v26 != LegacyBusDeviceNode + 61 )
LABEL_68:
        __fastfail(3u);
      *(_QWORD *)v23 = LegacyBusDeviceNode + 61;
      *(_QWORD *)(v23 + 8) = v26;
      *v26 = (PVOID)v23;
      LegacyBusDeviceNode[62] = v23;
      *(_QWORD *)(v23 + 24) = v32;
      v14 = v23 & -(__int64)(v32 != 0);
      v39 = v14;
      goto LABEL_14;
    }
    v36 = 1;
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(*a1, a1[1]);
    if ( LegacyBusDeviceNode == v16 && !**(_DWORD **)(*((_QWORD *)a1 + 2) + 8LL) )
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(1LL, 0LL);
LABEL_25:
    if ( !LegacyBusDeviceNode )
      break;
    v4 = v35;
  }
  if ( !v5 )
    return 3221225610LL;
  return 0LL;
}
