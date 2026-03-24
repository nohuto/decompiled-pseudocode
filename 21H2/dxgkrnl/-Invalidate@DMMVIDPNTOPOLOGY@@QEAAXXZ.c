/*
 * XREFs of ?Invalidate@DMMVIDPNTOPOLOGY@@QEAAXXZ @ 0x1C005C6A4
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C019C068 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00083B8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00084B8 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::Invalidate(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // rdi
  DMMVIDPNTOPOLOGY *v2; // rbx
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)this + 24;
  *((_BYTE *)this + 192) = 0;
  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v3 = (char *)v2 - 8;
    while ( v3 )
    {
      v4 = *((_QWORD *)v3 + 11);
      v5 = *(_QWORD *)(v4 + 104);
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 96));
        v6 = *(_QWORD *)(v4 + 104);
      }
      else
      {
        v6 = 0LL;
      }
      v11 = v6;
      *(_BYTE *)(v6 + 136) = 0;
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v11, 0LL);
      v7 = *((_QWORD *)v3 + 12);
      v8 = *(_QWORD *)(v7 + 104);
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 96));
        v9 = *(_QWORD *)(v7 + 104);
      }
      else
      {
        v9 = 0LL;
      }
      v12 = v9;
      *(_BYTE *)(v9 + 136) = 0;
      auto_rc<DMMVIDPNTARGETMODESET>::reset(&v12, 0LL);
      v10 = (char *)*((_QWORD *)v3 + 1);
      v3 = v10 - 8;
      if ( v10 == v1 )
        v3 = 0LL;
    }
  }
}
