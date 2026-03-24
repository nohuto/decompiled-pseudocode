/*
 * XREFs of ACPIRangeValidatePciMemoryResource @ 0x1C002B410
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C002B280 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C005DB8C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddi @ 0x1C005DD9C (WPP_RECORDER_SF_ddi.c)
 *     WPP_RECORDER_SF_ddiiii @ 0x1C005DE94 (WPP_RECORDER_SF_ddiiii.c)
 *     WPP_RECORDER_SF_diiidiiii @ 0x1C005DFF0 (WPP_RECORDER_SF_diiidiiii.c)
 */

int __fastcall ACPIRangeValidatePciMemoryResource(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _UNKNOWN **v4; // rax
  ULONG_PTR v5; // rbx
  char v6; // r13
  _DWORD *v7; // r12
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned int v12; // esi
  int v13; // r9d
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // ecx
  char v17; // di
  char v18; // r12
  int v19; // r9d
  int v21; // [rsp+28h] [rbp-49h]
  unsigned __int64 MaximumAddress; // [rsp+78h] [rbp+7h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+80h] [rbp+Fh] BYREF
  _UNKNOWN **v24; // [rsp+88h] [rbp+17h]
  PIO_RESOURCE_DESCRIPTOR Descriptor; // [rsp+90h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  unsigned __int64 Alignment; // [rsp+E8h] [rbp+77h] BYREF
  _DWORD *v29; // [rsp+F0h] [rbp+7Fh]

  v4 = &retaddr;
  v29 = a4;
  v5 = E820Info;
  v6 = a2;
  v7 = a4;
  MinimumAddress = 0LL;
  v8 = a1;
  MaximumAddress = 0LL;
  Alignment = 0LL;
  if ( E820Info )
  {
    v9 = 32LL * a2;
    Descriptor = (PIO_RESOURCE_DESCRIPTOR)(v9 + a1 + 8);
    v4 = (_UNKNOWN **)RtlIoDecodeMemIoResource(Descriptor, &Alignment, &MinimumAddress, &MaximumAddress);
    v12 = 0;
    v13 = (int)v4;
    v24 = v4;
    if ( *(_QWORD *)(v5 + 8) )
    {
      v14 = 0LL;
      do
      {
        v15 = 3 * v14;
        v16 = *(_DWORD *)(v5 + 24 * v14 + 32);
        if ( v16 == 2 )
          goto LABEL_5;
        LODWORD(v4) = v16 - 3;
        if ( (unsigned int)(v16 - 3) <= 1 && *(_DWORD *)(v5 + 8 * v15 + 28) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v4) = WPP_RECORDER_SF_ddi(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v10,
                            v11,
                            v13,
                            v21,
                            v12,
                            v16,
                            *(_QWORD *)(v5 + 8 * v15 + 24));
            v13 = (int)v24;
          }
          *(_DWORD *)(v5 + 8 * v15 + 28) = 0;
        }
        v10 = *(_QWORD *)(v5 + 8 * v15 + 16);
        if ( MaximumAddress < v10 )
          goto LABEL_5;
        v11 = v10 + *(_QWORD *)(v5 + 8 * v15 + 24);
        if ( MinimumAddress >= v11 )
          goto LABEL_5;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_diiidiiii(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v13,
            v21,
            v12,
            *(_DWORD *)(v5 + 8 * v15 + 32),
            v10,
            v11,
            v6,
            *(_QWORD *)(v9 + v8 + 24),
            *(_QWORD *)(v9 + v8 + 32),
            v13,
            Alignment);
        LODWORD(v4) = AcpiOverrideAttributes;
        if ( (AcpiOverrideAttributes & 1) != 0 && *(_DWORD *)(v5 + 8 * v15 + 32) == 4 )
        {
          v4 = *(_UNKNOWN ***)(v5 + 8 * v15 + 16);
          if ( MaximumAddress < (unsigned __int64)v4 )
            goto LABEL_24;
          v17 = MinimumAddress;
          if ( MinimumAddress >= (unsigned __int64)v4 )
            goto LABEL_24;
          v18 = (_BYTE)v4 - 1;
          LODWORD(v4) = RtlIoEncodeMemIoResource(
                          Descriptor,
                          *(_BYTE *)(v9 + a1 + 9),
                          (ULONGLONG)v4 - MinimumAddress,
                          Alignment,
                          MinimumAddress,
                          (ULONGLONG)v4 - 1);
          if ( (int)v4 < 0 )
            return (int)v4;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v4) = WPP_RECORDER_SF_ddiiii(
                            WPP_GLOBAL_Control->DeviceExtension,
                            v10,
                            v11,
                            v19,
                            v21,
                            v6,
                            v6,
                            v17,
                            v18,
                            v18 - v17 + 1,
                            Alignment);
LABEL_24:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = 4;
              LODWORD(v4) = WPP_RECORDER_SF_d(
                              WPP_GLOBAL_Control->DeviceExtension,
                              v10,
                              22,
                              13,
                              (__int64)&WPP_95ceafb9c956380d4634093f153ba036_Traceguids,
                              v12);
            }
          }
        }
        else
        {
          ++*v7;
        }
LABEL_5:
        v8 = a1;
        ++v12;
        v7 = v29;
        v13 = (int)v24;
        v14 = v12;
      }
      while ( (unsigned __int64)v12 < *(_QWORD *)(v5 + 8) );
    }
  }
  return (int)v4;
}
