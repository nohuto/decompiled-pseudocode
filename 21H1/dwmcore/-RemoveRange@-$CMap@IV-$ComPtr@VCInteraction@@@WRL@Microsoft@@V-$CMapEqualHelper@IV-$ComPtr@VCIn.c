/*
 * XREFs of ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x1802362C8
 * Callers:
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1802361A0 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 * Callees:
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800A09AC (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 *     ??_G?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1802232E4 (--_G-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveRange(
        __int64 a1,
        int a2)
{
  __int64 v2; // rdi
  int v4; // ecx
  LPVOID v5; // rax
  LPVOID v6; // rax

  v2 = a2;
  if ( a2 < 0 || a2 + 1 > *(_DWORD *)(a1 + 16) )
    return 0LL;
  Microsoft::WRL::ComPtr<CInteraction>::`scalar deleting destructor'((__int64 *)(*(_QWORD *)(a1 + 8) + 8LL * a2));
  v4 = *(_DWORD *)(a1 + 16);
  if ( (_DWORD)v2 + 1 != v4 )
  {
    memmove_0((void *)(*(_QWORD *)a1 + 4 * v2), (const void *)(*(_QWORD *)a1 + 4 * (v2 + 1)), 4LL * (v4 - (int)v2 - 1));
    memmove_0(
      (void *)(*(_QWORD *)(a1 + 8) + 8 * v2),
      (const void *)(*(_QWORD *)(a1 + 8) + 8 * (v2 + 1)),
      8LL * (*(_DWORD *)(a1 + 16) - (int)v2 - 1));
    v4 = *(_DWORD *)(a1 + 16);
  }
  v5 = DefaultHeap::Realloc(*(void **)a1, 4LL * (v4 - 1));
  if ( v5 )
    *(_QWORD *)a1 = v5;
  v6 = DefaultHeap::Realloc(*(void **)(a1 + 8), 8LL * (*(_DWORD *)(a1 + 16) - 1));
  if ( v6 )
    *(_QWORD *)(a1 + 8) = v6;
  --*(_DWORD *)(a1 + 16);
  return 1LL;
}
