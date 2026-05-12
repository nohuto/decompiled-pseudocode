/*
 * XREFs of RaUnitSmartReturnStatus @ 0x1C00488B0
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0048358 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C0010DE0 (RaSendIrpSynchronous.c)
 *     StorFreeSynchronousScsiRequest @ 0x1C001C268 (StorFreeSynchronousScsiRequest.c)
 *     StorBuildSynchronousScsiRequest @ 0x1C001C2B4 (StorBuildSynchronousScsiRequest.c)
 *     GetSrbScsiData @ 0x1C001C50C (GetSrbScsiData.c)
 *     WPP_SF_ @ 0x1C003324C (WPP_SF_.c)
 *     WPP_SF_DD @ 0x1C00332BC (WPP_SF_DD.c)
 *     PortSrbTranslateSrbToNtStatus @ 0x1C0059458 (PortSrbTranslateSrbToNtStatus.c)
 */

__int64 __fastcall RaUnitSmartReturnStatus(__int64 a1, unsigned __int64 a2, __int64 i)
{
  bool v3; // zf
  _BYTE *v4; // r14
  char v7; // di
  char v8; // r9
  unsigned int v9; // r11d
  __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  IRP *v16; // rax
  IRP *v17; // rbp
  int Status; // esi
  __int64 v19; // rcx
  char v20; // cl
  _BYTE *v21; // rdx
  unsigned __int8 v22; // r10
  char v23; // r8
  int v24; // eax
  int v25; // r9d
  unsigned __int16 v26; // dx
  _DEVICE_OBJECT *AttachedDevice; // rcx
  _BYTE *v28; // rcx
  unsigned __int8 v29; // r9
  char v30; // r11
  unsigned __int8 v31; // al
  unsigned __int8 v32; // r9
  unsigned __int8 v33; // al
  char *v34; // rax
  int v35; // edx
  unsigned __int8 v36; // dl
  __int64 v38; // [rsp+20h] [rbp-38h]
  _IO_STATUS_BLOCK v39; // [rsp+30h] [rbp-28h] BYREF
  char v40; // [rsp+60h] [rbp+8h] BYREF
  _BYTE *v41; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_BYTE *)(a2 + 2) == 40;
  v39 = 0LL;
  v4 = (_BYTE *)i;
  v7 = 1;
  if ( v3 )
  {
    v8 = 0;
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      for ( i = 0LL; (unsigned int)i < v9; i = (unsigned int)(i + 1) )
      {
        v10 = *(unsigned int *)(a2 + 4 * i + 120);
        if ( (unsigned int)v10 >= 0x80 )
        {
          v11 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v10 < (unsigned int)v11 )
          {
            v12 = (unsigned int)v10;
            v13 = *(_DWORD *)(v10 + a2) - 64;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 && v12 + 40 <= v11 )
                  break;
              }
              else if ( v12 + 56 <= v11 )
              {
                v8 = 1;
              }
            }
            else if ( v12 + 40 <= v11 )
            {
              v8 = 1;
            }
            if ( v8 )
              break;
          }
        }
      }
    }
  }
  v15 = *(_QWORD *)(a1 + 8);
  v41 = 0LL;
  v40 = 0;
  v16 = StorBuildSynchronousScsiRequest(v15, a2, i, &v39);
  v17 = v16;
  if ( v16 )
  {
    Status = RaSendIrpSynchronous(*(PDEVICE_OBJECT *)(a1 + 8), v16);
    if ( Status >= 0 )
    {
      Status = v17->IoStatus.Status;
      if ( Status >= 0 )
      {
        LOBYTE(v19) = *(_BYTE *)(a2 + 3);
        Status = PortSrbTranslateSrbToNtStatus(v19);
        if ( Status >= 0 )
        {
          if ( *(_BYTE *)(a2 + 2) == 40 )
          {
            GetSrbScsiData(a2, 0LL, 0LL, 0LL, &v41, &v40);
            v20 = *(_BYTE *)(a2 + 3);
            v21 = v41;
            v22 = v40;
          }
          else
          {
            v21 = *(_BYTE **)(a2 + 32);
            v22 = *(_BYTE *)(a2 + 11);
          }
          if ( v20 < 0 && v21 )
          {
            v23 = *v21 & 0x7F;
            if ( (unsigned __int8)(v23 - 114) > 1u )
            {
              if ( (unsigned __int8)(v23 - 112) <= 1u )
              {
                if ( v22 >= 0xCu )
                {
                  if ( v21[10] != 0xF4 || v21[9] != 44 )
                    v7 = 0;
                  *v4 = v7;
                  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                  {
                    v24 = (unsigned __int8)v21[9];
                    v25 = (unsigned __int8)v21[10];
                    v26 = 71;
                    AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_41:
                    LODWORD(v38) = v24;
                    WPP_SF_DD(
                      (__int64)AttachedDevice,
                      v26,
                      (__int64)&WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids,
                      v25,
                      v38);
                  }
                }
              }
              else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
              {
                WPP_SF_(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  0x48u,
                  (__int64)&WPP_af1ac7e2487a3dc41c42fd4890c580b6_Traceguids);
              }
              goto LABEL_71;
            }
            v28 = 0LL;
            v29 = 0;
            v30 = 0;
            if ( !v22 )
            {
LABEL_50:
              if ( v30 )
              {
                v40 = 9;
                if ( v28 )
                {
                  if ( v29 )
                  {
LABEL_59:
                    if ( v29 >= 2u )
                    {
                      v34 = &v40;
                      v35 = 0;
                      while ( *v28 != *v34 )
                      {
                        ++v35;
                        ++v34;
                        if ( v35 )
                        {
                          v36 = v28[1] + 2;
                          if ( v29 <= v36 )
                            goto LABEL_71;
                          v28 += v36;
                          v29 -= v36;
                          goto LABEL_59;
                        }
                      }
                      if ( v29 >= 0xEu && v28 )
                      {
                        if ( v28[9] != 0xF4 || v28[11] != 44 )
                          v7 = 0;
                        *v4 = v7;
                        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
                        {
                          v24 = (unsigned __int8)v28[11];
                          v26 = 70;
                          v25 = (unsigned __int8)v28[9];
                          AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
                          goto LABEL_41;
                        }
                      }
                    }
                  }
                }
              }
              goto LABEL_71;
            }
            if ( (unsigned __int8)(v23 - 114) <= 1u )
            {
              if ( v21 + 8 <= &v21[v22] )
              {
                v31 = v21[7];
                if ( v31 <= 0xF7u )
                {
                  v32 = v22;
                  v33 = v31 + 8;
                  if ( v33 <= v22 )
                    v32 = v33;
                  v29 = v32 - 8;
                  if ( v29 )
                  {
                    v28 = v21 + 8;
                    v30 = 1;
                  }
                }
              }
              goto LABEL_50;
            }
          }
          else
          {
            Status = -1073741823;
          }
        }
      }
    }
LABEL_71:
    StorFreeSynchronousScsiRequest(v17);
    return (unsigned int)Status;
  }
  return (unsigned int)-1073741801;
}
