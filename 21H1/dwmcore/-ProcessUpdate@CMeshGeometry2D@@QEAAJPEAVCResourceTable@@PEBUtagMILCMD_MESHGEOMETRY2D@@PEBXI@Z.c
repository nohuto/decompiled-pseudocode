/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x1801B7F04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18003922C (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800392D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcpy_0 @ 0x1800EBD6B (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x1801B8710 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MESHGEOMETRY2D *a3,
        char *a4,
        unsigned int a5)
{
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned int v18; // eax
  unsigned int v19; // r8d
  unsigned int *v20; // rax
  unsigned int v21; // edx
  int v22; // r9d
  unsigned int v24; // [rsp+20h] [rbp-28h]
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v8 = 0;
  CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
  v10 = *((_DWORD *)a3 + 2);
  v11 = a5;
  if ( v10 )
  {
    if ( v10 > a5 || (v9 = v10, v10 != 12 * (v10 / 0xCuLL)) )
    {
      v25 = 1107;
LABEL_32:
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, v25, 0LL);
LABEL_42:
      CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
      goto LABEL_43;
    }
    v12 = HrAlloc(v10, this + 15);
    v8 = v12;
    if ( v12 < 0 )
    {
      v24 = 1112;
LABEL_30:
      v22 = v12;
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v22, v24, 0LL);
      goto LABEL_41;
    }
    memcpy_0(this[15], a4, *((unsigned int *)a3 + 2));
    *((_DWORD *)this + 28) = *((_DWORD *)a3 + 2);
    v9 = *((unsigned int *)a3 + 2);
    v11 = a5 - v9;
    a4 += v9;
  }
  v14 = *((_DWORD *)a3 + 3);
  if ( !v14 )
    goto LABEL_11;
  if ( v14 > v11 || (v14 & 0xF) != 0 )
  {
    v25 = 1132;
    goto LABEL_32;
  }
  v12 = HrAlloc(v14, this + 17);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1137;
    goto LABEL_30;
  }
  memcpy_0(this[17], a4, *((unsigned int *)a3 + 3));
  *((_DWORD *)this + 32) = *((_DWORD *)a3 + 3);
  v15 = *((unsigned int *)a3 + 3);
  v11 -= v15;
  a4 += v15;
LABEL_11:
  v16 = *((_DWORD *)a3 + 4);
  if ( !v16 )
    goto LABEL_16;
  if ( v16 > v11 || (v16 & 3) != 0 )
  {
    v25 = 1157;
    goto LABEL_32;
  }
  v12 = HrAlloc(v16, this + 19);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1162;
    goto LABEL_30;
  }
  memcpy_0(this[19], a4, *((unsigned int *)a3 + 4));
  *((_DWORD *)this + 36) = *((_DWORD *)a3 + 4);
  v17 = *((unsigned int *)a3 + 4);
  v11 -= v17;
  a4 += v17;
LABEL_16:
  v18 = *((_DWORD *)a3 + 5);
  if ( !v18 )
    goto LABEL_21;
  if ( v18 > v11 || (v18 & 3) != 0 )
  {
    v25 = 1182;
    goto LABEL_32;
  }
  v12 = HrAlloc(v18, this + 21);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1187;
    goto LABEL_30;
  }
  memcpy_0(this[21], a4, *((unsigned int *)a3 + 5));
  *((_DWORD *)this + 40) = *((_DWORD *)a3 + 5);
LABEL_21:
  v19 = *((_DWORD *)this + 32) >> 4;
  if ( v19 >= *((_DWORD *)this + 36) >> 2 )
    v19 = *((_DWORD *)this + 36) >> 2;
  v20 = (unsigned int *)this[21];
  if ( *((_DWORD *)this + 28) / 0xCu < v19 )
    v19 = *((_DWORD *)this + 28) / 0xCu;
  v21 = *((_DWORD *)this + 40) >> 2;
  v13 = 0LL;
  if ( v21 )
  {
    while ( *v20 < v19 )
    {
      v13 = (unsigned int)(v13 + 1);
      ++v20;
      if ( (unsigned int)v13 >= v21 )
        goto LABEL_41;
    }
    v22 = -2003303421;
    v8 = -2003303421;
    v24 = 1219;
    goto LABEL_40;
  }
LABEL_41:
  if ( v8 < 0 )
    goto LABEL_42;
LABEL_43:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v8;
}
