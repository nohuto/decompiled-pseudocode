/*
 * XREFs of ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FD37C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FB94C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C00170C0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002AAA4 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C0123080 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::ReEnableTemporaryUnbind(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rbx
  __int64 v5; // r14
  __int64 v6; // rdi
  int v7; // r8d
  __int64 v8; // rbp
  unsigned __int64 j; // rbx
  __int64 v10; // r14
  __int64 v11; // rdi
  int v12; // r8d
  int v13; // edx
  bool v14; // cf
  char v15[8]; // [rsp+30h] [rbp-D8h]
  char v16[160]; // [rsp+40h] [rbp-C8h] BYREF

  v2 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_31:
      __fastfail(5u);
    v5 = *((_QWORD *)this + 3);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( !*(_BYTE *)(v6 + 9) && !*(_DWORD *)(v6 + 52) )
    {
      v7 = *(_DWORD *)(v6 + 32);
      *(_DWORD *)(v6 + 32) = v7 & 0xFFFFDFFF;
      if ( (v7 != 0) != ((v7 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v6 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v15 = v7 & 0xFFFFDFFF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v7,
            *(_QWORD *)v15);
        }
        *(_BYTE *)(*(_QWORD *)v6 + 5208LL) = 1;
        memset(v16, 0, sizeof(v16));
        if ( (unsigned __int8)byte_1C00E444B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v5 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v16);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v13,
              0x1Cu,
              0xAu,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              *(unsigned __int16 **)&v16[8],
              *(_QWORD *)v16);
        }
      }
    }
  }
  v8 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v8; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_31;
    v10 = *((_QWORD *)this + 1);
    v11 = *(_QWORD *)(v10 + 8 * j);
    if ( !*(_BYTE *)(v11 + 9) && !*(_DWORD *)(v11 + 52) )
    {
      v12 = *(_DWORD *)(v11 + 32);
      *(_DWORD *)(v11 + 32) = v12 & 0xFFFFDFFF;
      if ( (v12 != 0) != ((v12 & 0xFFFFDFFF) != 0) || !*(_QWORD *)v11 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v15 = v12 & 0xFFFFDFFF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v12,
            *(_QWORD *)v15);
        }
        v14 = (unsigned __int8)byte_1C00E444B < 4u;
        *(_BYTE *)(*(_QWORD *)v11 + 5208LL) = 1;
        if ( !v14 && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * j) + 80LL) + 24LL),
            0x1Cu,
            0xBu,
            (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
            *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v10 + 8 * j));
      }
    }
  }
}
