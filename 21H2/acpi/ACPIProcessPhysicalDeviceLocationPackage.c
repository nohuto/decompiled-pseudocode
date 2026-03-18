/*
 * XREFs of ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00A035C
 * Callers:
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0094310 (ACPIProcessPhysicalDeviceLocation.c)
 * Callees:
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00A0474 (ACPIGetPhysicalDeviceLocationBuffer.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocationPackage(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r12
  int v7; // edi
  _OWORD *v8; // rdx
  unsigned int i; // r14d
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 v22; // dx
  NTSTATUS v23; // eax
  __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int64 v26; // rax
  __int128 v27; // [rsp+28h] [rbp-69h] BYREF
  __int128 v28; // [rsp+38h] [rbp-59h]
  GUID *Guid; // [rsp+48h] [rbp-49h]
  struct _STRING SourceString; // [rsp+50h] [rbp-41h] BYREF
  UNICODE_STRING StringIn; // [rsp+60h] [rbp-31h] BYREF
  __int128 v32; // [rsp+70h] [rbp-21h] BYREF
  __int128 v33; // [rsp+80h] [rbp-11h]
  _QWORD *v34; // [rsp+90h] [rbp-1h]
  _OWORD v35[2]; // [rsp+98h] [rbp+7h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+27h]
  _DWORD *v37; // [rsp+F8h] [rbp+67h]

  v3 = *(_DWORD **)(a1 + 32);
  v36 = 0LL;
  v34 = 0LL;
  Guid = 0LL;
  v37 = v3;
  SourceString = 0LL;
  StringIn = 0LL;
  v7 = 0;
  memset(v35, 0, sizeof(v35));
  v32 = 0LL;
  v33 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( !*v3 )
  {
    v7 = -1073741823;
    goto LABEL_10;
  }
  if ( a2 || a3 )
  {
    v7 = AMLIEvalPkgDataElement(a1, 0, (__int64)v35);
    if ( v7 >= 0 )
    {
      if ( !a2 || (v7 = ACPIGetPhysicalDeviceLocationBuffer(v35, a2), v7 >= 0) )
      {
        if ( a3 )
        {
          v8 = (_OWORD *)(a3 + 16);
          if ( a2 )
          {
            *v8 = *(_OWORD *)a2;
            *(_DWORD *)(a3 + 32) = *(_DWORD *)(a2 + 16);
          }
          else
          {
            v7 = ACPIGetPhysicalDeviceLocationBuffer(v35, v8);
            if ( v7 < 0 )
              goto LABEL_10;
          }
          if ( *v3 > 1u )
          {
            for ( i = 2; i - 1 < *v3; i += 2 )
            {
              if ( v34 )
              {
                AMLIFreeDataBuffs((__int64)&v32);
                v34 = 0LL;
              }
              if ( Guid )
              {
                AMLIFreeDataBuffs((__int64)&v27);
                Guid = 0LL;
              }
              v7 = AMLIEvalPkgDataElement(a1, i - 1, (__int64)&v32);
              if ( v7 < 0 )
                break;
              if ( WORD1(v32) == 3 && DWORD2(v33) == 16 )
              {
                v11 = v34;
                v12 = *v34 - *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1;
                if ( *v34 == *(_QWORD *)&ACPI_PLD_JOINT_BUFFER_GUID.Data1 )
                  v12 = v34[1] - *(_QWORD *)ACPI_PLD_JOINT_BUFFER_GUID.Data4;
                if ( v12 )
                {
                  v13 = *v34 - *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1;
                  if ( *v34 == *(_QWORD *)&ACPI_PLD_SPATIAL_BUFFER_GUID.Data1 )
                    v13 = v34[1] - *(_QWORD *)ACPI_PLD_SPATIAL_BUFFER_GUID.Data4;
                  if ( v13 )
                  {
                    v14 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1;
                    if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data1 )
                      v14 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_CLASS_BUFFER_GUID.Data4;
                    if ( v14 )
                    {
                      v16 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                        v16 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                      if ( !v16 )
                        goto LABEL_74;
                      v17 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                        v17 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                      if ( !v17 )
                        goto LABEL_74;
                      v18 = *v34 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                      if ( *v34 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                        v18 = v34[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                      if ( v18 )
                      {
                        v19 = *v34 - *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1;
                        if ( *v34 == *(_QWORD *)&ACPI_PLD_CONTAINER_BUFFER_GUID.Data1 )
                          v19 = v34[1] - *(_QWORD *)ACPI_PLD_CONTAINER_BUFFER_GUID.Data4;
                        if ( !v19 && DWORD2(v28) >= 0x10 )
                        {
                          v20 = *(_QWORD *)(a3 + 136) - *(_QWORD *)&GUID_NULL.Data1;
                          if ( !v20 )
                            v20 = *(_QWORD *)(a3 + 144) - *(_QWORD *)GUID_NULL.Data4;
                          if ( !v20 )
                            *(GUID *)(a3 + 136) = *Guid;
                        }
                      }
                      else
                      {
LABEL_74:
                        if ( !*(_QWORD *)(a3 + 128) )
                        {
                          v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                          if ( v7 < 0 )
                            break;
                          if ( WORD1(v27) == 3 )
                          {
                            v21 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1;
                            if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data1 )
                              v21 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_ANSI_BUFFER_GUID.Data4;
                            if ( v21 )
                            {
                              v24 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1;
                              if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data1 )
                                v24 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_UNICODE_BUFFER_GUID.Data4;
                              if ( v24 )
                              {
                                v26 = *v11 - *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1;
                                if ( *v11 == *(_QWORD *)&ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data1 )
                                  v26 = v11[1] - *(_QWORD *)ACPI_PLD_INTERFACE_INSTANCE_GUID_BUFFER_GUID.Data4;
                                if ( !v26 && DWORD2(v28) >= 0x10 )
                                {
                                  v23 = RtlStringFromGUID(Guid, (PUNICODE_STRING)(a3 + 120));
LABEL_98:
                                  v7 = v23;
                                  if ( v23 < 0 )
                                    break;
                                }
                              }
                              else if ( DWORD2(v28) >= 0x10 )
                              {
                                v25 = 0;
                                StringIn.Buffer = (wchar_t *)Guid;
                                StringIn.Length = 0;
                                StringIn.MaximumLength = 16;
                                do
                                {
                                  if ( !*((_WORD *)&Guid->Data1 + ((unsigned __int64)v25 >> 1)) )
                                    break;
                                  v25 += 2;
                                  StringIn.Length = v25;
                                }
                                while ( v25 < 0x10u );
                                if ( v25 )
                                {
                                  v23 = RtlDuplicateUnicodeString(1u, &StringIn, (PUNICODE_STRING)(a3 + 120));
                                  goto LABEL_98;
                                }
                              }
                            }
                            else if ( DWORD2(v28) >= 0x10 )
                            {
                              v22 = 0;
                              SourceString.Buffer = (char *)Guid;
                              SourceString.Length = 0;
                              SourceString.MaximumLength = 16;
                              do
                              {
                                if ( !*((_BYTE *)&Guid->Data1 + v22) )
                                  break;
                                SourceString.Length = ++v22;
                              }
                              while ( v22 < 0x10u );
                              v3 = v37;
                              if ( v22 )
                              {
                                v23 = RtlAnsiStringToUnicodeString((PUNICODE_STRING)(a3 + 120), &SourceString, 1u);
                                goto LABEL_98;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v15 = *(_QWORD *)(a3 + 104) - *(_QWORD *)&GUID_NULL.Data1;
                      if ( !v15 )
                        v15 = *(_QWORD *)(a3 + 112) - *(_QWORD *)GUID_NULL.Data4;
                      if ( !v15 )
                      {
                        v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                        if ( v7 < 0 )
                          break;
                        if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                          *(GUID *)(a3 + 104) = *Guid;
                      }
                    }
                  }
                  else if ( (*(_BYTE *)(a3 + 52) & 0x1F) == 0 )
                  {
                    v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                    if ( v7 < 0 )
                      break;
                    if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                      *(GUID *)(a3 + 52) = *Guid;
                  }
                }
                else if ( (*(_BYTE *)(a3 + 36) & 0x1F) == 0 )
                {
                  v7 = AMLIEvalPkgDataElement(a1, i, (__int64)&v27);
                  if ( v7 < 0 )
                    break;
                  if ( WORD1(v27) == 3 && DWORD2(v28) >= 0x10 )
                    *(GUID *)(a3 + 36) = *Guid;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_10:
  if ( v36 )
    AMLIFreeDataBuffs((__int64)v35);
  if ( v34 )
    AMLIFreeDataBuffs((__int64)&v32);
  if ( Guid )
    AMLIFreeDataBuffs((__int64)&v27);
  return (unsigned int)v7;
}
