/*
 * XREFs of ?CreatePathEmitterArea@CPathEmitterArea@EmitterShapes@@SAJPEAUID2D1Geometry@@PEAPEAV12@@Z @ 0x18020AA14
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801E3AB4 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EmitterShapes::CPathEmitterArea::CreatePathEmitterArea(
        struct ID2D1Geometry *a1,
        struct EmitterShapes::CPathEmitterArea **a2)
{
  struct EmitterShapes::CPathEmitterArea *v4; // rax
  __int64 v5; // r8
  struct EmitterShapes::CPathEmitterArea *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  struct EmitterShapes::CPathEmitterArea *v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct EmitterShapes::CPathEmitterArea *)operator new(0x38uLL);
  v6 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 6) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_QWORD *)v4 + 6) = 0LL;
    *(_QWORD *)v4 = &EmitterShapes::CPathEmitterArea::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &EmitterShapes::CPathEmitterArea::`vftable'{for `ID2D1TessellationSink'};
  }
  else
  {
    v6 = 0LL;
  }
  v13 = v6;
  if ( v6 )
    (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int64, unsigned __int64))(*(_QWORD *)a1 + 80LL))(
         a1,
         0LL,
         v5,
         ((unsigned __int64)v6 + 16) & -(__int64)(v6 != 0LL));
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x118u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v6 + 2) + 32LL))((__int64)v6 + 16);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x119u, 0LL);
    }
    else
    {
      *a2 = v6;
      (*(void (__fastcall **)(struct EmitterShapes::CPathEmitterArea *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
  return v9;
}
