/*
 * XREFs of ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x180035800
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z @ 0x180003DD8 (--0-$CSimpleStringT@G$0A@@ATL@@QEAA@PEAUIAtlStringMgr@1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002BB40 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S_guid_D @ 0x1800FFE70 (WPP_SF_S_guid_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::OnPropertyValueChanged(
        CMonitorManager *this,
        const unsigned __int16 *a2,
        struct _tagpropertykey *a3)
{
  unsigned __int64 i; // rax
  __int64 v7; // rcx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // r14
  __int64 v12; // rax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S_guid_D(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, (_DWORD)a3, (_DWORD)a2, (__int64)a3, a3->pid);
  }
  for ( i = 0LL; i < 0x50; i += 16LL )
  {
    v7 = *(__int64 *)((char *)&CMonitorManager::_PropertyLookupTable + i);
    if ( a3->pid == *(_DWORD *)(v7 + 16) )
    {
      v9 = *(_QWORD *)&a3->fmtid.Data1 - *(_QWORD *)v7;
      if ( *(_QWORD *)&a3->fmtid.Data1 == *(_QWORD *)v7 )
        v9 = *(_QWORD *)a3->fmtid.Data4 - *(_QWORD *)(v7 + 8);
      if ( !v9 )
      {
        v10 = (__int64 *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
        v11 = v10;
        if ( v10 )
        {
          ATL::CSimpleStringT<unsigned short,0>::CSimpleStringT<unsigned short,0>(v10, (__int64)&ATL::g_strmgr);
          v11[4] = (__int64)this;
          if ( this )
            (*(void (__fastcall **)(CMonitorManager *))(*(_QWORD *)this + 8LL))(this);
          v11[5] = 0LL;
        }
        else
        {
          v11 = 0LL;
        }
        if ( v11 )
        {
          if ( a2 )
          {
            v12 = -1LL;
            do
              ++v12;
            while ( a2[v12] );
          }
          else
          {
            LODWORD(v12) = 0;
          }
          ATL::CSimpleStringT<unsigned short,0>::SetString(v11, a2, v12);
          JUMPOUT(0x180098A12LL);
        }
        JUMPOUT(0x180098AAFLL);
      }
    }
  }
  return 0LL;
}
