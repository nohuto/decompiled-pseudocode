/*
 * XREFs of ??0InputContext@@QEAA@XZ @ 0x180024B94
 * Callers:
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023D94 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$unordered_map@KW4ContextualProcessorDecision@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@@std@@QEAA@XZ @ 0x180024BEC (--0-$unordered_map@KW4ContextualProcessorDecision@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator@U.c)
 *     ??0?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800265F0 (--0-$unordered_map@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@U-$hash@K@std@@U-$equal_to@K@5@V-$a.c)
 */

// Hidden C++ exception states: #wind=3
InputContext *__fastcall InputContext::InputContext(InputContext *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &InputContext::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  std::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>::unordered_map<unsigned long,Microsoft::WRL::ComPtr<IInputTarget>>((char *)this + 24);
  std::unordered_map<unsigned long,enum ContextualProcessorDecision>::unordered_map<unsigned long,enum ContextualProcessorDecision>((char *)this + 112);
  *((_QWORD *)this + 22) = 0LL;
  return this;
}
