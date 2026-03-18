/*
 * XREFs of ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08
 * Callers:
 *     _UmfdDispatchEscape@4 @ 0x8B7AC (_UmfdDispatchEscape@4.c)
 * Callees:
 *     _UmfdCreateUsermodeDdiParameters@16 @ 0x8B614 (_UmfdCreateUsermodeDdiParameters@16.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z @ 0x8BB2A (-UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z.c)
 *     _UmfdCaptureUsermodeDdiParameters@0 @ 0x8BCCC (_UmfdCaptureUsermodeDdiParameters@0.c)
 *     ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4 (-EnsureTls@UmfdTls@@SGPAV1@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __thiscall UmfdEscSendCompleteWaitReceive(_DWORD *this)
{
  int *v2; // eax
  int *v3; // edi
  int v4; // esi
  _DWORD *v5; // edx
  char v6; // cl
  _DWORD *v7; // ecx
  int v8; // [esp+10h] [ebp-38h] BYREF
  int v9; // [esp+14h] [ebp-34h]
  int *v10; // [esp+18h] [ebp-30h]
  int v11; // [esp+20h] [ebp-28h] BYREF
  int v12; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v13; // [esp+28h] [ebp-20h]
  char v14; // [esp+2Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v13 = this;
  v2 = (int *)UmfdTls::EnsureTls();
  v3 = v2;
  v10 = v2;
  if ( v2 )
  {
    v2[6] = 0;
    v2[5] = 0;
    if ( v2[4] < 0 )
      v4 = 0;
    else
      v4 = UmfdCaptureUsermodeDdiParameters();
    if ( v4 < 0
      || (v4 = UmfdHostSendCompleteWaitReceive(v13[5]), v4 < 0)
      || (v12 = 0, v11 = 0, v8 = 0, v9 = 0, v14 = 0, v4 = UmfdCreateUsermodeDdiParameters(&v12, &v11, &v8, &v14), v4 < 0) )
    {
      v3[6] = 0;
      v3[5] = 0;
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      ProbeForWrite((volatile void *)v13[1], 4u, 4u);
      ProbeForWrite((volatile void *)v13[2], 4u, 4u);
      ProbeForWrite((volatile void *)v13[4], 1u, 1u);
      v5 = v13;
      *(_DWORD *)v13[1] = v12;
      *(_DWORD *)v5[2] = v11;
      v6 = v14;
      *(_BYTE *)v5[4] = v14;
      if ( v6 )
      {
        ProbeForWrite((volatile void *)v5[3], 8u, 4u);
        v7 = (_DWORD *)v13[3];
        *v7 = v8;
        v7[1] = v9;
      }
      ms_exc.registration.TryLevel = -2;
    }
    v13[1] = v4;
    v3[4] = v4;
  }
  else
  {
    this[1] = -1073741801;
  }
}
