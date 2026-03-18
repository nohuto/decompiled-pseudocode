/*
 * XREFs of ACPIThermalReadTemperature @ 0x1C00B5578
 * Callers:
 *     ACPIThermalWorker @ 0x1C009A7E0 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalUpdateTemperature @ 0x1C00132D4 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalReadTemperature(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r9d
  unsigned int v6; // r8d
  int *v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  bool v12; // cc
  unsigned int v13; // eax
  unsigned int v14; // ecx
  bool v15; // cc
  unsigned int v16; // eax
  unsigned int v17; // ecx
  bool v18; // cc
  unsigned int v19; // eax
  unsigned int v20; // ecx
  bool v21; // cc
  unsigned int *v22; // rcx
  __int64 i; // r10
  unsigned int v24; // eax
  unsigned int v25; // edx
  bool v26; // cc
  IRP *v27; // rcx
  __int64 v28; // rcx
  struct _DEVICE_OBJECT *v29; // rdi
  __int64 v30; // rdx
  __int64 result; // rax
  int v32; // edx

  v2 = *(_QWORD *)(a1 + 200);
  v3 = 0;
  v6 = -1;
  v7 = (int *)(v2 + 224);
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_DWORD *)(v2 + 232) = 0;
  if ( !a2 )
  {
    v8 = *(_DWORD *)(v2 + 104);
    *v7 = -1;
    if ( v8 )
    {
      v9 = *(_DWORD *)(v2 + 108);
      v3 = v8 < v9 ? v9 - v8 : 0;
      if ( ~v9 > v8 )
        v6 = v9 + v8;
    }
    v10 = *(_DWORD *)(v2 + 20);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v2 + 16);
      v12 = v10 <= v11;
      if ( v10 < v11 )
      {
        if ( v10 > v3 )
        {
          v3 = *(_DWORD *)(v2 + 20);
          goto LABEL_13;
        }
        v12 = v10 <= v11;
      }
      if ( !v12 && v10 < v6 )
        v6 = *(_DWORD *)(v2 + 20);
    }
LABEL_13:
    v13 = *(_DWORD *)(v2 + 24);
    if ( !v13 )
      goto LABEL_21;
    v14 = *(_DWORD *)(v2 + 16);
    v15 = v13 <= v14;
    if ( v13 < v14 )
    {
      if ( v13 > v3 )
      {
        v3 = *(_DWORD *)(v2 + 24);
        goto LABEL_21;
      }
      v15 = v13 <= v14;
    }
    if ( !v15 && v13 < v6 )
      v6 = *(_DWORD *)(v2 + 24);
LABEL_21:
    v16 = *(_DWORD *)(v2 + 28);
    if ( !v16 )
      goto LABEL_29;
    v17 = *(_DWORD *)(v2 + 16);
    v18 = v16 <= v17;
    if ( v16 < v17 )
    {
      if ( v16 > v3 )
      {
        v3 = *(_DWORD *)(v2 + 28);
        goto LABEL_29;
      }
      v18 = v16 <= v17;
    }
    if ( !v18 && v16 < v6 )
      v6 = *(_DWORD *)(v2 + 28);
LABEL_29:
    v19 = *(_DWORD *)(v2 + 76);
    if ( !v19 )
      goto LABEL_37;
    v20 = *(_DWORD *)(v2 + 16);
    v21 = v19 <= v20;
    if ( v19 < v20 )
    {
      if ( v19 > v3 )
      {
        v3 = *(_DWORD *)(v2 + 76);
        goto LABEL_37;
      }
      v21 = v19 <= v20;
    }
    if ( !v21 && v19 < v6 )
      v6 = *(_DWORD *)(v2 + 76);
LABEL_37:
    if ( *(_BYTE *)(v2 + 32) )
    {
      v22 = (unsigned int *)(v2 + 36);
      for ( i = *(unsigned __int8 *)(v2 + 32); i; --i )
      {
        v24 = *v22;
        if ( *v22 )
        {
          v25 = *(_DWORD *)(v2 + 16);
          v26 = v24 <= v25;
          if ( v24 >= v25 )
            goto LABEL_44;
          if ( v24 <= v3 )
          {
            v26 = v24 <= v25;
LABEL_44:
            if ( !v26 && v24 < v6 )
              v6 = *v22;
            goto LABEL_47;
          }
          v3 = *v22;
        }
LABEL_47:
        ++v22;
      }
    }
    if ( !v3 && v6 == -1 )
      return 0LL;
  }
  v27 = *(IRP **)(v2 + 208);
  *(_DWORD *)(v2 + 228) = v3;
  *(_DWORD *)(v2 + 232) = v6;
  IoReuseIrp(v27, -1073741637);
  v28 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
  *(_BYTE *)(v28 - 72) = 14;
  *(_DWORD *)(v28 - 48) = 2703504;
  *(_DWORD *)(v28 - 56) = 12;
  *(_DWORD *)(v28 - 64) = 4;
  *(_QWORD *)(*(_QWORD *)(v2 + 208) + 24LL) = v7;
  v29 = *(struct _DEVICE_OBJECT **)(v2 + 216);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(_QWORD *)(v2 + 216), *(_QWORD *)(v2 + 208));
    if ( (int)result < 0 )
    {
      *(_BYTE *)(v2 + 272) = 1;
      return result;
    }
    v32 = *v7;
    *(_BYTE *)(v2 + 272) = 0;
    ACPIThermalUpdateTemperature(a1, v32);
  }
  else
  {
    KeClearEvent((PRKEVENT)(v2 + 248));
    v30 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
    *(_QWORD *)(v30 - 16) = ACPIThermalReadTemperatureComplete;
    *(_QWORD *)(v30 - 8) = a1;
    *(_BYTE *)(v30 - 69) = -32;
    IofCallDriver(v29, *(PIRP *)(v2 + 208));
  }
  return 0LL;
}
