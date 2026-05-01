/*
 * XREFs of ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x1804196DC
 * Callers:
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x180419558 (TabletModeDragPattern--GetWindowTitleWithMap.c)
 * Callees:
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180049730 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_RehashTable@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x1803B22D4 (-_RehashTable@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicatio.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803B2450 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 */

__int64 __fastcall CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
        void **a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  int v4; // edx
  void **v5; // rdi
  unsigned __int64 v9; // rdx
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rax

  v4 = 0;
  v5 = a1 + 2;
  if ( !a1[2] )
  {
    v9 = *((unsigned int *)a1 + 1);
    *v5 = 0LL;
    v11 = v9;
    v10 = v9 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v11, 0x18uLL) )
      v4 = CTLocalAllocPolicy::Alloc(a1, *((__int64 *)&v10 + 1), v10, v5);
    else
      v4 = -2147024362;
  }
  if ( v4 >= 0 )
  {
    v12 = *((_DWORD *)a1 + 1);
    if ( *(_DWORD *)a1 <= v12 >> 1 )
    {
      if ( *((_DWORD *)a1 + 2) <= v12 >> 2 )
        goto LABEL_11;
      v13 = *((_DWORD *)a1 + 1);
    }
    else
    {
      v13 = 2 * v12 - 1;
    }
    v4 = CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(
           (__int64)a1,
           v13);
LABEL_11:
    if ( v4 >= 0 )
    {
      v14 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
              (__int64)*v5,
              *((_DWORD *)a1 + 1),
              a3);
      if ( *(_DWORD *)v14 == 1 )
      {
        *(_QWORD *)(v14 + 16) = *a4;
      }
      else
      {
        if ( *(_DWORD *)v14 == 2 )
          --*((_DWORD *)a1 + 2);
        *(_QWORD *)(v14 + 8) = *a3;
        *(_QWORD *)(v14 + 16) = *a4;
        *(_DWORD *)v14 = 1;
        ++*(_DWORD *)a1;
      }
      return 0;
    }
  }
  return (unsigned int)v4;
}
