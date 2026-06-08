/*
 * XREFs of AcpiEval_OSC @ 0x1C0003864
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0021A14 (ProcLibDeviceStart.c)
 * Callees:
 *     memcpy_s @ 0x1C00042D8 (memcpy_s.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C0020130 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_OSC(__int64 a1, _DWORD *a2, __int16 a3, _QWORD *a4)
{
  int v5; // ecx
  _DWORD *v8; // rbx
  unsigned __int16 v9; // r13
  unsigned int v10; // ebp
  _DWORD *PoolWithTag; // rax
  __int64 v12; // rcx
  int v13; // edi
  __int64 v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF

  LOWORD(v16) = a3;
  v5 = a2[5];
  v16 = 0;
  v8 = 0LL;
  if ( (unsigned int)(v5 - 1) > 4 )
  {
    v13 = -1073741823;
  }
  else
  {
    v9 = 4 * v5;
    v10 = 4 * v5 + 64;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72637250u);
    v8 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = -1073741670;
LABEL_14:
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x10000u);
      return (unsigned int)v13;
    }
    memset(PoolWithTag, 0, v10);
    v8[2] = v10;
    *v8 = 1130980673;
    v8[1] = 1129533279;
    v8[3] = 4;
    v8[4] = 1048578;
    memcpy_s(v8 + 5, 0x10uLL, a2, 0x10uLL);
    v12 = 4LL;
    if ( *((_WORD *)v8 + 9) >= 4u )
      v12 = *((unsigned __int16 *)v8 + 9);
    *(_DWORD *)((char *)v8 + v12 + 20) = 0x40000;
    *(_DWORD *)((char *)v8 + v12 + 24) = a2[4];
    *(_DWORD *)((char *)v8 + v12 + 28) = 0x40000;
    *(_DWORD *)((char *)v8 + v12 + 32) = a2[5];
    *(_WORD *)((char *)v8 + v12 + 36) = 2;
    *(_WORD *)((char *)v8 + v12 + 38) = v9;
    memcpy_s((char *)v8 + v12 + 40, v9, a2 + 6, v9);
    _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x10000u);
    v15 = 0LL;
    v13 = AcpiEvaluateMethod(a1, 0, (_DWORD)v8, (unsigned int)&v15, (__int64)&v16);
    if ( v13 >= 0 && v15 && a4 )
      *a4 = v15 + 16;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v13 < 0 )
    goto LABEL_14;
  return (unsigned int)v13;
}
