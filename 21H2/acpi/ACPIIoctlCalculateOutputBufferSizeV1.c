/*
 * XREFs of ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001C0A0
 * Callers:
 *     ACPIIoctlEvalPostProcessingV1 @ 0x1C001BE20 (ACPIIoctlEvalPostProcessingV1.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001BF00 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001C0A0 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005BB40 (AcpiConvertObjDataToMethodArguments.c)
 *     ACPIProcessorContainerComputeIoctlPayloadSize @ 0x1C005DDE4 (ACPIProcessorContainerComputeIoctlPayloadSize.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C005E054 (ACPIProcessorContainerFillIoctlBuffer.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001C0A0 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 */

__int64 __fastcall ACPIIoctlCalculateOutputBufferSizeV1(__int64 a1, _DWORD *a2, int *a3, unsigned __int8 a4, char a5)
{
  int v5; // ebx
  __int16 v7; // dx
  int v9; // esi
  __int64 result; // rax
  int *v11; // r14
  char v12; // cl
  int v13; // eax
  unsigned int v14; // eax
  int v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v7 = *(_WORD *)(a1 + 2);
  v15 = 0;
  if ( v7 == 1 )
  {
    *a3 = 1;
    v9 = 12;
    if ( a4 != 1 )
      v9 = 8;
    goto LABEL_4;
  }
  if ( (unsigned __int16)(v7 - 2) <= 1u )
  {
    v14 = *(_DWORD *)(a1 + 24);
    if ( v14 < 4 )
      v14 = 4;
    v9 = v14 + 4;
    *a3 = 1;
    goto LABEL_4;
  }
  if ( v7 != 4 )
  {
    if ( v7 )
      return 3222536207LL;
    v9 = 0;
    *a3 = 1;
    goto LABEL_4;
  }
  v11 = *(int **)(a1 + 32);
  v12 = a5;
  if ( a5 )
    v13 = *v11;
  else
    v13 = 1;
  *a3 = v13;
  v9 = 4;
  if ( v12 )
    v9 = 0;
  if ( !*v11 )
  {
LABEL_4:
    *a2 += v9;
    return 0LL;
  }
  while ( 1 )
  {
    result = ACPIIoctlCalculateOutputBufferSizeV1(
               (int)v11 + 8 * (v5 + 1 + 4 * v5),
               (_DWORD)a2,
               (unsigned int)&v15,
               a4,
               0);
    if ( (int)result < 0 )
      return result;
    if ( ++v5 >= (unsigned int)*v11 )
      goto LABEL_4;
  }
}
