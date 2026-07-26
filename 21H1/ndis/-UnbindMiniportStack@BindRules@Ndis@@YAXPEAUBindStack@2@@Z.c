/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00FBC50
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FB79C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EF0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C002A504 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FD314 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01230B0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // r14
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  _DWORD *v7; // rdi
  int v8; // r8d
  __int64 v9; // r14
  unsigned __int64 j; // rbx
  __int64 v11; // rsi
  _DWORD *v12; // rdi
  int v13; // r8d
  int v14; // edx
  int v15; // edx
  bool v16; // cf
  __int64 *v17; // rax
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdx
  unsigned __int16 v20; // r9
  __int64 *v21; // rax
  char v22[8]; // [rsp+30h] [rbp-188h]
  __int64 v23[20]; // [rsp+40h] [rbp-178h] BYREF
  char v24[160]; // [rsp+E0h] [rbp-D8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v3; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
LABEL_41:
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v6 + 8 * i),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady) )
      {
        memset(v24, 0, sizeof(v24));
        if ( (unsigned __int8)byte_1C00E434B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v15,
              0x1Cu,
              0x3Bu,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              *(unsigned __int16 **)&v24[8],
              *(_QWORD *)v24);
        }
      }
    }
    else
    {
      v8 = v7[8];
      v7[8] = v8 & 0xFFFDFFFF;
      if ( (v8 != 0) != ((v8 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v7 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v22 = v8 & 0xFFFDFFFF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v8,
            *(_QWORD *)v22);
        }
        *(_BYTE *)(*(_QWORD *)v7 + 5208LL) = 1;
        memset(v23, 0, sizeof(v23));
        if ( (unsigned __int8)byte_1C00E434B >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v23);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v14,
              0x1Cu,
              0x3Au,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              (unsigned __int16 *)v23[1],
              v23[0]);
        }
      }
    }
  }
  v9 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v9; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      goto LABEL_41;
    v11 = *((_QWORD *)this + 1);
    v12 = *(_DWORD **)(v11 + 8 * j);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v11 + 8 * j),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C00E434B >= 4u )
      {
        v21 = *(__int64 **)(v11 + 8 * j);
        v18 = *v21;
        v19 = *(unsigned __int16 **)(v21[10] + 24);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v20 = 61;
          goto LABEL_40;
        }
      }
    }
    else
    {
      v13 = v12[8];
      v12[8] = v13 & 0xFFFDFFFF;
      if ( (v13 != 0) != ((v13 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v12 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          *(_DWORD *)v22 = v13 & 0xFFFDFFFF;
          WPP_RECORDER_SF_Dd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x1Cu,
            0xEu,
            (struct _GUID *)&WPP_059f2550fb64352c12bb44eb1234267b_Traceguids,
            v13,
            *(_QWORD *)v22);
        }
        v16 = (unsigned __int8)byte_1C00E434B < 4u;
        *(_BYTE *)(*(_QWORD *)v12 + 5208LL) = 1;
        if ( !v16 )
        {
          v17 = *(__int64 **)(v11 + 8 * j);
          v18 = *v17;
          v19 = *(unsigned __int16 **)(v17[10] + 24);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v20 = 60;
LABEL_40:
            WPP_RECORDER_SF_Zq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)v19,
              0x1Cu,
              v20,
              (struct _GUID *)&WPP_03205896d2953af44399314f6c3788db_Traceguids,
              v19,
              v18);
            continue;
          }
        }
      }
    }
  }
}
