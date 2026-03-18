/*
 * XREFs of ProcessMultipleCommandsInSpecificQueue @ 0x1C001B490
 * Callers:
 *     ProcessMultipleCommands @ 0x1C001B3D0 (ProcessMultipleCommands.c)
 * Callees:
 *     ProcessCommandTrace @ 0x1C0002DA0 (ProcessCommandTrace.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     SrbAssignCommandId @ 0x1C001B9B0 (SrbAssignCommandId.c)
 */

char __fastcall ProcessMultipleCommandsInSpecificQueue(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  char v7; // r12
  unsigned __int16 v8; // r13
  __int64 v9; // r14
  __int64 SrbExtension; // rax
  __int64 v11; // r8
  __int64 v12; // r15
  unsigned __int16 v13; // ax
  _OWORD *v14; // rdx
  int v15; // ecx
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  signed __int32 v23[8]; // [rsp+0h] [rbp-70h] BYREF
  __int64 v24; // [rsp+20h] [rbp-50h]
  int *v25; // [rsp+28h] [rbp-48h]
  __int64 v26; // [rsp+30h] [rbp-40h]
  int v27; // [rsp+38h] [rbp-38h]
  int v28; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v29[3]; // [rsp+44h] [rbp-2Ch]
  __int64 v30; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h]
  __int64 v32; // [rsp+60h] [rbp-10h]
  __int64 v33; // [rsp+68h] [rbp-8h]
  _QWORD savedregs[7]; // [rsp+70h] [rbp+0h]
  char v35; // [rsp+B8h] [rbp+48h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+50h] BYREF
  unsigned __int16 v37; // [rsp+C8h] [rbp+58h]

  v37 = a4;
  v7 = 1;
  v8 = 0;
  v9 = 0LL;
  StorPortExtendedFunction(
    93LL,
    a1,
    1LL,
    a3 + 56,
    (unsigned int)&v30,
    v25,
    v26,
    v27,
    v28,
    *(_QWORD *)&v29[1],
    1LL,
    0LL,
    0LL,
    0LL,
    savedregs[0],
    savedregs[1],
    savedregs[2],
    savedregs[3]);
  while ( a2 )
  {
    SrbExtension = GetSrbExtension(a2);
    v11 = *(unsigned __int16 *)(a3 + 40);
    v12 = SrbExtension;
    if ( !(_WORD)v11 )
    {
      _InterlockedAdd16((volatile signed __int16 *)(a1 + 808), 1u);
      v11 = *(unsigned __int16 *)(a3 + 40);
    }
    if ( (unsigned __int8)SrbAssignCommandId(a1, SrbExtension, v11) )
    {
      if ( *(_WORD *)(a3 + 40) )
        v9 = 344LL * *(unsigned __int16 *)(a3 + 50) + *(_QWORD *)(a1 + 776) - 344LL;
      v13 = *(_WORD *)(v12 + 4246);
      *(_WORD *)(v12 + 4098) = v13;
      if ( *(_BYTE *)(a1 + 17) )
      {
        ProcessCommandTrace(a1, a2);
        v13 = *(_WORD *)(v12 + 4246);
      }
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + 16LL * v13) = a2;
      *(_WORD *)(*(_QWORD *)(a3 + 32) + 16LL * *(unsigned __int16 *)(v12 + 4246) + 8) = *(_WORD *)(v12 + 4248);
      v14 = *(_OWORD **)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v12 + 4248));
      *v14 = *(_OWORD *)(v12 + 4096);
      v14[1] = *(_OWORD *)(v12 + 4112);
      v14[2] = *(_OWORD *)(v12 + 4128);
      v14[3] = *(_OWORD *)(v12 + 4144);
      *(_WORD *)(*(_QWORD *)(a3 + 24) + 16LL * *(unsigned __int16 *)(v12 + 4248) + 8) = *(_WORD *)(v12 + 4246);
      _InterlockedAdd16((volatile signed __int16 *)(a3 + 128), 1u);
      v8 = *(_WORD *)(v12 + 4248) + 1;
    }
    else
    {
      *(_BYTE *)(a2 + 3) = 5;
      v7 = 0;
    }
    a2 = *(_QWORD *)(a2 + 40);
  }
  v15 = 0;
  if ( v8 != v37 )
    v15 = v8;
  **(_DWORD **)(a3 + 16) = v15;
  _InterlockedOr(v23, 0);
  StorPortNotification(4100LL, a1, &v30);
  if ( v9 && *(_BYTE *)(v9 + 200) )
  {
    v36 = 0;
    StorPortExtendedFunction(
      92LL,
      a1,
      &v36,
      v16,
      v24,
      v25,
      v26,
      v27,
      v28,
      *(_QWORD *)&v29[1],
      v30,
      v31,
      v32,
      v33,
      savedregs[0],
      savedregs[1],
      savedregs[2],
      savedregs[3]);
    v17 = *(_QWORD *)(v9 + 208);
    if ( v17 )
    {
      v21 = -10LL * *(unsigned int *)(v9 + 204);
      v35 = 0;
      StorPortExtendedFunction(
        89LL,
        a1,
        *(_QWORD *)(v17 + 8LL * v36),
        v21,
        0,
        0LL,
        &v35,
        v27,
        v28,
        *(_QWORD *)&v29[1],
        v30,
        v31,
        v32,
        v33,
        savedregs[0],
        savedregs[1],
        savedregs[2],
        savedregs[3]);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 3812) & 0x10) != 0 )
      {
        v18 = *(_QWORD *)(a1 + 240);
        v19 = *(_QWORD *)(v18 + 48LL * v36 + 8);
        if ( v19 )
        {
          v29[0] = 0;
          LOWORD(v29[0]) = *(_WORD *)(v18 + 48LL * v36 + 16);
          _BitScanForward64(&v20, v19);
          *(_DWORD *)((char *)v29 + 2) = v20;
          StorPortNotification(4107LL, a1, v9 + 216);
        }
      }
      v25 = &v28;
      v24 = 0LL;
      v28 = 0;
      StorPortNotification(4098LL, a1, v9 + 216);
    }
  }
  if ( !*(_WORD *)(a3 + 40) )
    _InterlockedDecrement16((volatile signed __int16 *)(a1 + 808));
  return v7;
}
