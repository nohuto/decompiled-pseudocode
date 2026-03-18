/*
 * XREFs of ?Pop@COcclusionContext@@UEAAJXZ @ 0x1800DCCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800DCD68 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 *     ?PopClip@COcclusionContext@@AEAAXXZ @ 0x1801C05FC (-PopClip@COcclusionContext@@AEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Pop(COcclusionContext *this)
{
  int v1; // eax
  unsigned int v2; // edi
  char *v4; // rsi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)this + 358);
  v2 = 0;
  if ( v1 )
  {
    *((_DWORD *)this + 358) = v1 - 1;
  }
  else
  {
    v4 = (char *)this + 1440;
    v5 = *((_DWORD *)this + 360);
    if ( v5 )
    {
      v6 = *(_DWORD *)(*((_QWORD *)this + 182) + 4LL * (unsigned int)(v5 - 1));
    }
    else
    {
      v2 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147467259, 0x41Du);
      v6 = v9;
    }
    if ( v6 )
    {
      CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop(v4, &v9);
      v7 = *((_DWORD *)this + 8);
      if ( v7 )
        *((_DWORD *)this + 8) = v7 - 1;
    }
    else
    {
      COcclusionContext::PopClip(this);
    }
  }
  return v2;
}
