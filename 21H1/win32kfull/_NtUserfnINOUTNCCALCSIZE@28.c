/*
 * XREFs of _NtUserfnINOUTNCCALCSIZE@28 @ 0x9803A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserfnINOUTNCCALCSIZE(int a1, int a2, int a3, const void **a4, int a5, int a6, int a7)
{
  void *v7; // ebx
  const void **v8; // eax
  const void **v9; // ecx
  const void **v10; // edi
  void *v12; // eax
  void *v13; // edi
  const void **v14; // eax
  _BYTE v15[28]; // [esp+10h] [ebp-98h] BYREF
  int v16; // [esp+34h] [ebp-74h]
  const void **v17; // [esp+38h] [ebp-70h]
  const void *v18; // [esp+3Ch] [ebp-6Ch]
  int v19; // [esp+40h] [ebp-68h]
  const void **v20; // [esp+44h] [ebp-64h]
  const void *v21[13]; // [esp+48h] [ebp-60h] BYREF
  const void *v22; // [esp+7Ch] [ebp-2Ch] BYREF
  const void *v23; // [esp+80h] [ebp-28h]
  const void *v24; // [esp+84h] [ebp-24h]
  const void *v25; // [esp+88h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+90h] [ebp-18h]

  v16 = a1;
  v20 = a4;
  v19 = a6;
  v7 = 0;
  memset(v21, 0, sizeof(v21));
  memset(v15, 0, sizeof(v15));
  v18 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  ms_exc.registration.TryLevel = 0;
  if ( a3 )
  {
    v12 = v20;
    if ( (unsigned int)v20 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    qmemcpy(v12, v12, 0x34u);
    qmemcpy(v21, v12, sizeof(v21));
    v13 = (void *)v21[12];
    if ( v21[12] >= (const void *)_MmUserProbeAddress )
    {
      *(_DWORD *)_MmUserProbeAddress = 0;
      v13 = (void *)v21[12];
    }
    qmemcpy(v13, v13, 0x1Cu);
    v7 = (void *)v21[12];
    v18 = v21[12];
    qmemcpy(v15, v21[12], sizeof(v15));
    v21[12] = v15;
    v9 = v21;
  }
  else
  {
    v8 = v20;
    if ( (unsigned int)v20 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    *v8 = *v8;
    v8[1] = v8[1];
    v8[2] = v8[2];
    v8[3] = v8[3];
    v22 = *v8;
    v23 = v8[1];
    v24 = v8[2];
    v25 = v8[3];
    v9 = &v22;
  }
  v17 = v9;
  ms_exc.registration.TryLevel = -2;
  v19 = ((int (__stdcall *)(int, int, int, const void **, int))mpFnidPfn[((_BYTE)v19 + 6) & 0x1F])(v16, a2, a3, v9, a5);
  ms_exc.registration.TryLevel = 1;
  if ( a3 )
  {
    v14 = v20;
    qmemcpy(v20, v21, 0x34u);
    v14[12] = v7;
    qmemcpy(v7, v15, 0x1Cu);
  }
  else
  {
    v10 = v20;
    *v20 = v22;
    *++v10 = v23;
    *++v10 = v24;
    v10[1] = v25;
  }
  ms_exc.registration.TryLevel = -2;
  return v19;
}
