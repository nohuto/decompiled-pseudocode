/*
 * XREFs of ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18008434C
 * Callers:
 *     ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180017DC0 (-SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV?$span@$$CBG$0?0@gsl@@PEAPEAX1@Z @ 0x180065100 (-AppendGeometry@CD3DBatchExecutionContext@@AEAAJIIAEBV-$span@$$CBG$0-0@gsl@@PEAPEAX1@Z.c)
 *     ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x180083A10 (-Render@CDrawListEntryBatch@@UEAAJXZ.c)
 *     ?SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z @ 0x1800842F0 (-SetDrawMethod@CD3DBatchExecutionContext@@EEAAXW4PrimitiveDrawMethod@@@Z.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801ABD80 (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801ABCAC (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 */

void __fastcall CD3DBatchExecutionContext::Flush(__int64 a1, int a2)
{
  __int64 v3; // rdi
  char v4; // al

  *(_DWORD *)(a1 + 40) |= a2;
  v3 = *(_QWORD *)(a1 + 32);
  if ( *(_QWORD *)(v3 + 40) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 600LL) + 120LL))(
      *(_QWORD *)(*(_QWORD *)(v3 + 16) + 600LL),
      *(_QWORD *)(v3 + 24),
      0LL);
    *(_QWORD *)(v3 + 40) = 0LL;
    *(_DWORD *)(v3 + 48) = 0;
    v4 = *(_BYTE *)(a1 + 82);
    if ( v4 )
    {
      if ( v4 == 2 )
      {
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(*(_QWORD *)(a1 + 32) + 112LL));
        CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v3 + 64));
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(a1 + 16) + 160LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 100),
          *(unsigned int *)(a1 + 104),
          *(unsigned int *)(a1 + 88),
          0,
          *(_DWORD *)(a1 + 92));
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 104LL))(
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a1 + 96),
          *(unsigned int *)(a1 + 84));
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 64) + 600LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v3 + 64) + 600LL),
        *(_QWORD *)(v3 + 72),
        0LL);
      *(_QWORD *)(v3 + 88) = 0LL;
      *(_DWORD *)(v3 + 96) = 0;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 96LL))(
        *(_QWORD *)(a1 + 16),
        *(unsigned int *)(a1 + 100),
        *(unsigned int *)(a1 + 88),
        0LL);
    }
    ++*(_DWORD *)(a1 + 112);
    *(_DWORD *)(a1 + 96) = 0;
    *(_DWORD *)(a1 + 100) = 0;
    *(_DWORD *)(a1 + 104) = 0;
  }
}
