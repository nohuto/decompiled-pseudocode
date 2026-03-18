/*
 * XREFs of HasLighting @ 0x1800B48C4
 * Callers:
 *     GetExpectedVertexShaderDesc @ 0x1800B4984 (GetExpectedVertexShaderDesc.c)
 * Callees:
 *     ??9details@gsl@@YA_NV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@01@0@Z @ 0x1800B4FE8 (--9details@gsl@@YA_NV-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@01@0@Z.c)
 *     ??$find@V?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@W4ShaderLinkingArgument@@@std@@YA?AV?$span_iterator@V?$span@$$CBW4ShaderLinkingArgument@@$0?0@gsl@@$0A@@details@gsl@@V123@V123@AEBW4ShaderLinkingArgument@@@Z @ 0x1800B5028 (--$find@V-$span_iterator@V-$span@$$CBW4ShaderLinkingArgument@@$0-0@gsl@@$0A@@details@gsl@@W4Shad.c)
 */

char __fastcall HasLighting(__int64 *a1)
{
  __int64 v1; // rax
  char v2; // bl
  _QWORD v4[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v5; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v7[16]; // [rsp+50h] [rbp-10h] BYREF
  __int16 v8; // [rsp+70h] [rbp+10h] BYREF

  if ( *((_WORD *)a1 + 26) == 11 )
    return 1;
  v1 = *a1;
  v6[0] = a1;
  v8 = 2;
  v4[0] = a1;
  v5 = (unsigned __int64)a1;
  v2 = 0;
  v6[1] = v1;
  v4[1] = v1;
  v5 = *(_OWORD *)((__int64 (__fastcall *)(_BYTE *, __int128 *, _QWORD *, __int16 *))std::find<gsl::details::span_iterator<gsl::span<enum ShaderLinkingArgument const,-1>,0>,enum ShaderLinkingArgument>)(
                    v7,
                    &v5,
                    v4,
                    &v8);
  if ( (unsigned __int8)gsl::details::operator!=(&v5, v6) )
    return 1;
  return v2;
}
