/*
 * XREFs of ?OnRandomSeedChanged@CParticleEmitterVisual@@QEAAXXZ @ 0x180171654
 * Callers:
 *     ?SetRandomSeed@?$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z @ 0x180174940 (-SetRandomSeed@-$CParticleEmitterVisualGeneratedT@VCParticleEmitterVisual@@VCVisual@@@@QEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800EEC10 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800EED1B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CParticleEmitterVisual::OnRandomSeedChanged(CParticleEmitterVisual *this)
{
  int v2; // r8d
  unsigned int v3; // ecx
  __int64 v4; // rdx
  int Src; // [rsp+20h] [rbp-13A8h] BYREF
  _DWORD v6[1251]; // [rsp+24h] [rbp-13A4h]

  v6[1248] = -1;
  v2 = 1;
  v3 = *((_DWORD *)this + 157);
  v4 = 1LL;
  v6[0] = v3;
  do
  {
    v3 = v2 + 1812433253 * (v3 ^ (v3 >> 30));
    ++v2;
    v6[v4++] = v3;
  }
  while ( v4 < 624 );
  Src = 624;
  memcpy_0((char *)this + 1300, &Src, 0x1388uLL);
  (*(void (__fastcall **)(CParticleEmitterVisual *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
}
