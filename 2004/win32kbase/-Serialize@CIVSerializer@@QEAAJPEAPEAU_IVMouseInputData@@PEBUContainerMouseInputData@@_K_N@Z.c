/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B3D50
 * Callers:
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B1EE8 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B2500 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B17B4 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVMouseInputData **a2,
        const struct ContainerMouseInputData *a3,
        __int64 a4,
        bool a5)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _IVMouseInputData *v15; // rcx
  _WORD *v16; // rcx
  _WORD *v17; // rdx
  __int16 v18; // ax

  v6 = a4;
  v7 = (36 * a4 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a5 )
  {
    *((_QWORD *)this + 4) += v7;
  }
  else
  {
    v10 = *((_QWORD *)this + 5);
    if ( !CIVSerializer::Ensure(this, v7) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    v15 = (struct _IVMouseInputData *)(v10 + *((_QWORD *)this + 2));
    *a2 = v15;
    if ( v6 )
    {
      v16 = (_WORD *)((char *)v15 + 8);
      v17 = (_WORD *)((char *)a3 + 4);
      do
      {
        *(v16 - 4) = *(v17 - 2);
        *(v16 - 2) = *(v17 - 1);
        v18 = *v17;
        v17 += 32;
        *v16 = v18;
        v16 += 18;
        *(v16 - 16) = *(v17 - 31);
        *((_DWORD *)v16 - 7) = *((_DWORD *)v17 - 15);
        *((_DWORD *)v16 - 6) = *((_DWORD *)v17 - 14);
        *((_DWORD *)v16 - 5) = *((_DWORD *)v17 - 13);
        *((_DWORD *)v16 - 4) = *((_DWORD *)v17 - 12);
        *((_DWORD *)v16 - 3) = *((_DWORD *)v17 - 5);
        --v6;
      }
      while ( v6 );
      v15 = *a2;
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)v15 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}
