/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVMouseInputData@@PEBUContainerMouseInputData@@_K_N@Z @ 0x1C01B9AB0
 * Callers:
 *     ?IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B7C48 (-IVMeasureMouseInputBuffer@@YAJAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@.c)
 *     ?IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B8260 (-IVSerializeMouseInputBuffer@@YAJ_NAEBUContainerMouseInput@@AEBU_UNICODE_STRING@@AEAUCIVSerializ.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01B7514 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rcx
  struct _IVMouseInputData *v12; // rcx
  _WORD *v13; // rcx
  _WORD *v14; // rdx
  __int16 v15; // ax

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
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11);
    v12 = (struct _IVMouseInputData *)(v10 + *((_QWORD *)this + 2));
    *a2 = v12;
    if ( v6 )
    {
      v13 = (_WORD *)((char *)v12 + 8);
      v14 = (_WORD *)((char *)a3 + 4);
      do
      {
        *(v13 - 4) = *(v14 - 2);
        *(v13 - 2) = *(v14 - 1);
        v15 = *v14;
        v14 += 32;
        *v13 = v15;
        v13 += 18;
        *(v13 - 16) = *(v14 - 31);
        *((_DWORD *)v13 - 7) = *((_DWORD *)v14 - 15);
        *((_DWORD *)v13 - 6) = *((_DWORD *)v14 - 14);
        *((_DWORD *)v13 - 5) = *((_DWORD *)v14 - 13);
        *((_DWORD *)v13 - 4) = *((_DWORD *)v14 - 12);
        *((_DWORD *)v13 - 3) = *((_DWORD *)v14 - 5);
        --v6;
      }
      while ( v6 );
      v12 = *a2;
    }
    *a2 = (struct _IVMouseInputData *)(((unsigned __int64)v12 - *((_QWORD *)this + 2)) | 1);
  }
  return 0LL;
}
