/*
 * XREFs of ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FD048
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FB79C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EF0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReStartTemporaryPause(Ndis::BindRules *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  __int64 v2; // rbp
  unsigned __int16 *v3; // rbx
  unsigned __int64 i; // rsi
  __int64 v6; // r15
  _DWORD *v7; // r14
  int v8; // r8d
  __int64 v9; // rbp
  unsigned __int64 j; // rsi
  __int64 v11; // r15
  _DWORD *v12; // r14
  int v13; // r8d
  int v14; // r8d
  unsigned int v15; // edx
  int v16; // edx
  bool v17; // cf
  char v18[8]; // [rsp+30h] [rbp-E8h]
  char v19[160]; // [rsp+40h] [rbp-D8h] BYREF

  v2 = *((unsigned int *)this + 1255);
  v3 = 0LL;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 1255) )
LABEL_33:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 628);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( !v7[10] )
    {
      v8 = v7[9];
      v7[9] = v8 & 0xFFFFFFDF;
      if ( (v8 != 0) != ((v8 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v7 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v8 & 0xFFFFFFDF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v8,
            *(_QWORD *)v18);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5208LL) = 1;
        memset(v19, 0, sizeof(v19));
        if ( (unsigned __int8)byte_1C00E434B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v19);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v16,
              0x1Cu,
              0xCu,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              *(unsigned __int16 **)&v19[8],
              *(_QWORD *)v19);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1251);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1251) )
      goto LABEL_33;
    v11 = *((_QWORD *)this + 626);
    v12 = *(_DWORD **)(v11 + 8 * j);
    if ( !v12[10] )
    {
      v13 = v12[9];
      v12[9] = v13 & 0xFFFFFFDF;
      if ( (v13 != 0) != ((v13 & 0xFFFFFFDF) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v18 = v13 & 0xFFFFFFDF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xFu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v13,
            *(_QWORD *)v18);
        }
        v17 = (unsigned __int8)byte_1C00E434B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5208LL) = 1;
        if ( !v17 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            0x1Cu,
            0xDu,
            (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v11 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v11 + 8 * j));
      }
    }
  }
  if ( !*((_DWORD *)this + 1268) )
  {
    v14 = *((_DWORD *)this + 1267);
    v15 = v14 & 0xFFFFFFDF;
    *((_DWORD *)this + 1267) = v14 & 0xFFFFFFDF;
    if ( (v14 != 0) != ((v14 & 0xFFFFFFDF) != 0) || !*((_QWORD *)this + 629) )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
      {
        *(_DWORD *)v18 = v14 & 0xFFFFFFDF;
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          5u,
          0x1Cu,
          0xFu,
          (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
          v14,
          *(_QWORD *)v18);
      }
      v17 = (unsigned __int8)byte_1C00E434B < 4u;
      *(_BYTE *)(*((_QWORD *)this + 629) + 5208LL) = 1;
      if ( !v17 )
      {
        if ( this )
          v3 = (unsigned __int16 *)*((_QWORD *)this + 482);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v15,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
            v3,
            this);
      }
    }
  }
}
