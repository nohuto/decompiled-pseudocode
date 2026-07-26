/*
 * XREFs of ?ndisOidPostTaskOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BEE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E2D0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017200 (WPP_RECORDER_SF_qqqd.c)
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00370A0 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 */

void __fastcall ndisOidPostTaskOffload(struct _NDIS_REQ_TRACKER *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // ebp
  int v8; // eax

  v2 = *(_QWORD *)a1;
  v4 = *((_QWORD *)a1 + 4);
  v5 = *((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBAu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v2,
      v5,
      v4);
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    v6 = *(_QWORD *)(v5 + 696);
    v7 = 0;
    if ( v6 )
    {
      if ( *(_DWORD *)(v6 + 88) == -67042815 )
      {
        ndisOidPostOffloadEncapsulation(a1);
        if ( *(_DWORD *)(*(_QWORD *)(v5 + 696) + 88LL) == -67042815 )
        {
          *(_DWORD *)(v4 + 32) = -67042815;
          *(_QWORD *)(v4 + 40) = *(_QWORD *)(*(_QWORD *)(v5 + 696) + 96LL);
          *(_DWORD *)(v4 + 48) = *(_DWORD *)(*(_QWORD *)(v5 + 696) + 104LL);
          *(_DWORD *)(*(_QWORD *)(v5 + 696) + 88LL) = 0;
          *(_QWORD *)(*(_QWORD *)(v5 + 696) + 96LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v5 + 696) + 104LL) = 0;
        }
        v8 = *((_DWORD *)a1 + 10);
        if ( !v8 )
          v7 = *(_DWORD *)(v4 + 48);
        *(_DWORD *)(v4 + 52) = v7;
        *(_DWORD *)(v4 + 56) = v8 != 0 ? 0x90 : 0;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0xBBu,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v2,
      v5,
      v4,
      *((_DWORD *)a1 + 10));
}
