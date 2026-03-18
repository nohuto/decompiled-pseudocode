/*
 * XREFs of ?AddResourceNotifier@CD3DResource@@UEAAXPEAVIDeviceResourceNotify@@@Z @ 0x180237390
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@PEBUShaderLinkingBody@@@?$vector@PEBUShaderLinkingBody@@V?$allocator@PEBUShaderLinkingBody@@@std@@@std@@QEAAPEAPEBUShaderLinkingBody@@QEAPEBU2@$$QEAPEBU2@@Z @ 0x180047B78 (--$_Emplace_reallocate@PEBUShaderLinkingBody@@@-$vector@PEBUShaderLinkingBody@@V-$allocator@PEBU.c)
 */

void __fastcall CD3DResource::AddResourceNotifier(CD3DResource *this, struct IDeviceResourceNotify *a2)
{
  __int64 *v2; // rcx
  _QWORD *v4; // rdx
  struct IDeviceResourceNotify *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = (__int64 *)((char *)this + 64);
  v4 = (_QWORD *)v2[1];
  if ( (_QWORD *)v2[2] == v4 )
  {
    std::vector<ShaderLinkingBody const *>::_Emplace_reallocate<ShaderLinkingBody const *>(v2, v4, &v5);
  }
  else
  {
    *v4 = a2;
    v2[1] += 8LL;
  }
}
