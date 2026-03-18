/*
 * XREFs of ?RecordRotation@VIDMM_GLOBAL@@SAXPEAU_EPROCESS@@PEAX_KPEAU_MDL@@W4_MM_ROTATE_DIRECTION@@J@Z @ 0x1C00C16E4
 * Callers:
 *     ?Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ22PEAX@Z4TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C2DD8 (-Rotate@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAVVIDMM_GLOBAL@@W4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6A.c)
 *     ?Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00CE910 (-Rotate@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ3.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordRotation(
        struct _EPROCESS *a1,
        void *a2,
        __int64 a3,
        struct _MDL *a4,
        enum _MM_ROTATE_DIRECTION a5,
        int a6)
{
  __int64 v8; // r8
  __int64 v9; // rdx

  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    v8 = (unsigned int)_InterlockedExchangeAdd((_DWORD *)&VIDMM_GLOBAL::_RotationHistory + 3, 1u)
       % *((_DWORD *)&VIDMM_GLOBAL::_RotationHistory + 2);
    v9 = 6 * v8;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v9) = a1;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + 6 * v8 + 1) = a2;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v9 + 2) = a3;
    *((_DWORD *)VIDMM_GLOBAL::_RotationHistory + 2 * v9 + 6) = a5;
    *((_DWORD *)VIDMM_GLOBAL::_RotationHistory + 2 * v9 + 10) = a6;
    *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + v9 + 4) = 0LL;
    if ( a4 )
      *((_QWORD *)VIDMM_GLOBAL::_RotationHistory + 6 * v8 + 4) = (__int64)a4[1].Next << 12;
  }
}
