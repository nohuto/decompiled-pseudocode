/*
 * XREFs of ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x180046EEC
 * Callers:
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180046B14 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ?AddItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEAAJAEBQEBGAEBV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@@Z @ 0x1800470DC (-AddItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSi.c)
 *     ??$CreateRefCountedObj@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@XZ @ 0x1800471D0 (--$CreateRefCountedObj@V-$CCoSimpleArray@_K$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@_K@@@.c)
 *     ?Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180048D00 (-Alloc@CTLocalAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x180048D3C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     ?_RehashTable@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJI@Z @ 0x180048EF8 (-_RehashTable@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEB_K@Z @ 0x180048FC4 (-s_LookupEntry@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGV?$ComPtr@V?$CRefCountedObject@V?$CCoSimpleArray@_K$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@_K@@@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x1800629A0 (-s_LookupEntry@-$CSimpleHashTable@PEBGV-$ComPtr@V-$CRefCountedObject@V-$CCoSimpleArray@_K$0PPPPP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18007ECF0 (--4-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::_AddApplicationData(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _DWORD *v7; // rdi
  int v8; // ebx
  _QWORD *v9; // r14
  __int64 v10; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edi
  __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // kr00_8
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  _QWORD *v30; // [rsp+60h] [rbp+30h] BYREF
  __int64 v31; // [rsp+68h] [rbp+38h] BYREF

  v31 = a2;
  v7 = (_DWORD *)(a1 + 1000);
  v8 = 0;
  v9 = (_QWORD *)(a1 + 1016);
  if ( !*(_QWORD *)(a1 + 1016) )
  {
    v23 = *(unsigned int *)(a1 + 1004);
    *v9 = 0LL;
    v25 = v23;
    v24 = v23 * (unsigned __int128)0x18uLL;
    if ( is_mul_ok(v25, 0x18uLL) )
      v8 = CTLocalAllocPolicy::Alloc((void *)a1, DWORD2(v24), v24, (void **)(a1 + 1016));
    else
      v8 = -2147024362;
  }
  if ( v8 < 0 )
    goto LABEL_33;
  if ( *v7 > v7[1] >> 1 || v7[2] > v7[1] >> 2 )
    v8 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::_RehashTable(v7);
  if ( v8 < 0 )
    goto LABEL_33;
  v10 = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
          *v9,
          (unsigned int)v7[1],
          a3);
  v11 = (_DWORD *)v10;
  if ( *(_DWORD *)v10 == 1 )
  {
    v8 = -2147024809;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F2,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
      (const char *)(unsigned int)v8,
      v28);
    return (unsigned int)v8;
  }
  if ( *(_DWORD *)v10 == 2 )
    --v7[2];
  *(_QWORD *)(v10 + 8) = *a3;
  v12 = *a4;
  *(_QWORD *)(v10 + 16) = *a4;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  *v11 = 1;
  ++*v7;
  v30 = 0LL;
  v13 = *(_QWORD *)(a1 + 1040);
  if ( v13
    && (v14 = (_DWORD *)CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
                          v13,
                          *(unsigned int *)(a1 + 1028),
                          &v31),
        *v14 == 1) )
  {
    Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>::operator=(&v30, v14 + 4);
    v16 = v30;
  }
  else
  {
    v15 = (_QWORD *)CreateRefCountedObj<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>,>(&v28);
    v16 = 0LL;
    if ( &v30 != v15 )
    {
      v16 = (_QWORD *)*v15;
      *v15 = 0LL;
    }
    v30 = v16;
    v17 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<CCoSimpleArray<unsigned __int64,4294967294,CSimpleArrayStandardCompareHelper<unsigned __int64>>>>,CStringHashPolicy,CStringCompare>::AddItem(
            a1 + 1024,
            &v31,
            &v30);
    v19 = v18;
    if ( v18 < 0 )
    {
      v26 = (unsigned int)v18;
      v27 = 8440LL;
      goto LABEL_36;
    }
  }
  v20 = v16[2];
  if ( v20 != v16[4]
    || (v19 = CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                v16 + 1,
                v20 + 1),
        v19 >= 0) )
  {
    v21 = (_QWORD *)(v16[1] + 8 * v16[2]++);
    if ( v21 )
      *v21 = *a3;
    v19 = 0;
    goto LABEL_23;
  }
  v26 = (unsigned int)v19;
  v27 = 8443LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v27,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)v26,
    v28);
LABEL_23:
  if ( v16 )
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
  return (unsigned int)v19;
}
