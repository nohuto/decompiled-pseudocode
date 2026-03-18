/*
 * XREFs of ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18020695C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x180044330 (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800443B0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     ?UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ @ 0x180207160 (-UnRegisterNotifiers@CMeshGeometry2D@@UEAAXXZ.c)
 */

__int64 __fastcall CMeshGeometry2D::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MESHGEOMETRY2D *a3,
        char *a4,
        unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int *v20; // rax
  unsigned int v21; // r8d
  int v22; // r9d
  unsigned int v24; // [rsp+20h] [rbp-28h]

  v8 = 0;
  CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
  v10 = *((_DWORD *)a3 + 2);
  v11 = a5;
  if ( v10 )
  {
    if ( v10 > a5 || (v9 = v10, v10 != 12 * (v10 / 0xCuLL)) )
    {
      v24 = 1107;
LABEL_39:
      v22 = -2003303421;
      v8 = -2003303421;
      goto LABEL_40;
    }
    v12 = HrAlloc(v10, this + 16);
    v8 = v12;
    if ( v12 < 0 )
    {
      v24 = 1112;
LABEL_30:
      v22 = v12;
LABEL_40:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v22, v24);
      CMeshGeometry2D::UnRegisterNotifiers((CMeshGeometry2D *)this);
      goto LABEL_41;
    }
    memcpy_0(this[16], a4, *((unsigned int *)a3 + 2));
    *((_DWORD *)this + 30) = *((_DWORD *)a3 + 2);
    v9 = *((unsigned int *)a3 + 2);
    v11 = a5 - v9;
    a4 += v9;
  }
  v13 = *((_DWORD *)a3 + 3);
  if ( !v13 )
    goto LABEL_11;
  if ( v13 > v11 || (v13 & 0xF) != 0 )
  {
    v24 = 1132;
    goto LABEL_39;
  }
  v12 = HrAlloc(v13, this + 18);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1137;
    goto LABEL_30;
  }
  memcpy_0(this[18], a4, *((unsigned int *)a3 + 3));
  *((_DWORD *)this + 34) = *((_DWORD *)a3 + 3);
  v14 = *((unsigned int *)a3 + 3);
  v11 -= v14;
  a4 += v14;
LABEL_11:
  v15 = *((_DWORD *)a3 + 4);
  if ( !v15 )
    goto LABEL_16;
  if ( v15 > v11 || (v15 & 3) != 0 )
  {
    v24 = 1157;
    goto LABEL_39;
  }
  v12 = HrAlloc(v15, this + 20);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1162;
    goto LABEL_30;
  }
  memcpy_0(this[20], a4, *((unsigned int *)a3 + 4));
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 4);
  v16 = *((unsigned int *)a3 + 4);
  v11 -= v16;
  a4 += v16;
LABEL_16:
  v17 = *((_DWORD *)a3 + 5);
  if ( !v17 )
    goto LABEL_21;
  if ( v17 > v11 || (v17 & 3) != 0 )
  {
    v24 = 1182;
    goto LABEL_39;
  }
  v12 = HrAlloc(v17, this + 22);
  v8 = v12;
  if ( v12 < 0 )
  {
    v24 = 1187;
    goto LABEL_30;
  }
  memcpy_0(this[22], a4, *((unsigned int *)a3 + 5));
  *((_DWORD *)this + 42) = *((_DWORD *)a3 + 5);
LABEL_21:
  v18 = *((_DWORD *)this + 34) >> 4;
  v19 = *((_DWORD *)this + 30) / 0xCu;
  if ( v18 >= *((_DWORD *)this + 38) >> 2 )
    v18 = *((_DWORD *)this + 38) >> 2;
  v20 = (unsigned int *)this[22];
  if ( v19 >= v18 )
    v19 = v18;
  v21 = *((_DWORD *)this + 42) >> 2;
  v9 = 0LL;
  if ( v21 )
  {
    while ( *v20 < v19 )
    {
      v9 = (unsigned int)(v9 + 1);
      ++v20;
      if ( (unsigned int)v9 >= v21 )
        goto LABEL_41;
    }
    v24 = 1219;
    goto LABEL_39;
  }
LABEL_41:
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v8;
}
