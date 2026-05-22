/*
 * XREFs of ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18014D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x180012790 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@QEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180013120 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x180024AA8 (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_map@KW4ContextualProcessorState@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorState@@@std@@@3@@std@@QEAA@XZ @ 0x1800AE644 (--0-$unordered_map@KW4ContextualProcessorState@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U-$p.c)
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F78E8 (--$_Try_emplace@AEBK$$V@-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_.c)
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18014B344 (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIContextualProcessor@@@Z @ 0x18014B4F4 (--4-$ComPtr@UIContextualProcessor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIContextualProcessor@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014B544 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ContextualProcessorBuffer::TryAddProcessorAndContact(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rsi
  _QWORD *i; // rdi
  __int64 *v8; // r14
  int v9; // ebx
  int v10; // ebx
  __int64 v11; // rax
  _QWORD v13[2]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v14; // [rsp+38h] [rbp-69h] BYREF
  _QWORD v15[8]; // [rsp+40h] [rbp-61h] BYREF
  __int64 v16; // [rsp+80h] [rbp-21h]
  _QWORD v17[8]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v18; // [rsp+C8h] [rbp+27h] BYREF
  int v19; // [rsp+110h] [rbp+6Fh] BYREF
  __int64 *v20; // [rsp+120h] [rbp+7Fh]

  v20 = a4;
  v19 = a2;
  v6 = a1 + 32;
  for ( i = *(_QWORD **)(a1 + 32); ; i += 20 )
  {
    if ( i == *(_QWORD **)(a1 + 40) )
    {
      v14 = 0LL;
      std::unordered_map<unsigned long,enum ContextualProcessorState>::unordered_map<unsigned long,enum ContextualProcessorState>(
        (__int64)v15,
        a2,
        a3);
      v16 = 0LL;
      std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((__int64)v17);
      v18 = 0LL;
      Microsoft::WRL::ComPtr<IContextualProcessor>::operator=(&v14, a3);
      v8 = a4 + 1;
      Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)&v18, a4 + 1);
      BYTE8(v18) = 0;
      LODWORD(v16) = 0;
      v9 = *(_DWORD *)a4;
      std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long const &,>(
        v15,
        (__int64)v13,
        &v19);
      *(_DWORD *)(v13[0] + 20LL) = v9;
      std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long const &,>(
        v17,
        (__int64)v13,
        &v19);
      *(_DWORD *)(v13[0] + 20LL) = 0;
      if ( *(_QWORD *)(v6 + 16) == *(_QWORD *)(v6 + 8) )
      {
        std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
          (__int64 **)v6,
          *(__int64 **)(v6 + 8),
          (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v14);
      }
      else
      {
        ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
          *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(v6 + 8),
          (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v14);
        *(_QWORD *)(v6 + 8) += 160LL;
      }
      ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata((ContextualProcessorBuffer::ContextualProcessorMetadata *)&v14);
      return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
    }
    if ( *i == a3 )
      break;
  }
  v10 = *(_DWORD *)a4;
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long const &,>(
    i + 1,
    (__int64)v13,
    &v19);
  *(_DWORD *)(v13[0] + 20LL) = v10;
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::_Try_emplace<unsigned long const &,>(
    i + 10,
    (__int64)v13,
    &v19);
  *(_DWORD *)(v13[0] + 20LL) = 0;
  v8 = a4 + 1;
  v11 = a4[1];
  if ( v11 && v11 != i[18] )
    Microsoft::WRL::ComPtr<IUnknown>::operator=(i + 18, a4 + 1);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
}
