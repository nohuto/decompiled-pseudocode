/*
 * XREFs of ExProcessorCounterSetCallback @ 0x1406A6580
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x14027DBC4 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1402DE3F0 (KeFindFirstSetRightGroupAffinity.c)
 *     KeQueryNodeActiveAffinity @ 0x1402DE440 (KeQueryNodeActiveAffinity.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402DE560 (KeQueryActiveProcessorCountEx.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403D4B70 (swscanf_s.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExpQueryProcessorInformationCounters @ 0x1406A6DA0 (ExpQueryProcessorInformationCounters.c)
 *     PcwAddInstance @ 0x1406D9F50 (PcwAddInstance.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  bool v4; // si
  int v5; // r8d
  int v6; // r9d
  bool v7; // r12
  bool v8; // r14
  bool v9; // cl
  int v10; // edi
  __int64 v11; // rax
  struct _PCW_BUFFER *v12; // r15
  ULONG ActiveProcessorCount; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rbx
  unsigned int v16; // r8d
  unsigned __int64 v17; // r9
  unsigned __int64 Mask; // r12
  unsigned int v19; // r8d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r10
  __int64 FirstSetRightGroupAffinity; // rbx
  int v23; // r9d
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // r12
  int result; // eax
  __int64 v29; // rdi
  _QWORD *v30; // rdx
  const UNICODE_STRING *v31; // rdx
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v33; // [rsp+38h] [rbp-D0h]
  bool v34; // [rsp+39h] [rbp-CFh]
  USHORT Count[2]; // [rsp+3Ch] [rbp-CCh] BYREF
  int v36; // [rsp+40h] [rbp-C8h]
  unsigned int v37; // [rsp+44h] [rbp-C4h] BYREF
  int v38; // [rsp+48h] [rbp-C0h] BYREF
  ULONG v39; // [rsp+4Ch] [rbp-BCh]
  unsigned __int64 v40; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v41; // [rsp+58h] [rbp-B0h]
  PPCW_BUFFER Buffer; // [rsp+60h] [rbp-A8h]
  struct _PCW_DATA v43; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING Name; // [rsp+78h] [rbp-90h] BYREF
  struct _PCW_DATA v45; // [rsp+88h] [rbp-80h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+98h] [rbp-70h] BYREF
  struct _PCW_DATA v47; // [rsp+A8h] [rbp-60h] BYREF
  struct _PCW_DATA v48; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v49[26]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v50[26]; // [rsp+198h] [rbp+90h] BYREF
  _QWORD v51[26]; // [rsp+268h] [rbp+160h] BYREF
  wchar_t pszDest[16]; // [rsp+338h] [rbp+230h] BYREF

  v4 = 0;
  Affinity = 0LL;
  memset(v49, 0, 0xC8uLL);
  memset(v50, 0, 0xC8uLL);
  Count[0] = 0;
  Name = 0LL;
  memset(v51, 0, 0xC8uLL);
  LOBYTE(v36) = 0;
  v7 = 0;
  v34 = 0;
  v33 = 0;
  v8 = 0;
  v38 = 0;
  v9 = 0;
  v37 = 0;
  v10 = a1 - 2;
  if ( v10 )
  {
    if ( v10 != 1 )
      return 0;
    v11 = *a2;
    v12 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v12;
    v7 = (v11 & 0x100E0FF05LL) != 0;
    LOBYTE(v36) = v7;
    v4 = (v11 & 0xC00F0000) != 0;
    v8 = (v11 & 0x63F000000LL) != 0;
    v34 = v4;
    v33 = v8;
    v9 = swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v37, &v38) == 2;
  }
  else
  {
    v12 = (struct _PCW_BUFFER *)a2[3];
    Buffer = v12;
  }
  if ( !v9 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    LOWORD(v14) = 0;
    v15 = 0LL;
    v37 = 0;
    v16 = ActiveProcessorCount;
    v39 = ActiveProcessorCount;
    v45.Data = 0LL;
    v17 = 0LL;
    v43.Data = 0LL;
    if ( !KeNumberNodes )
    {
LABEL_20:
      if ( v16 > 1 )
      {
        v50[0] /= (unsigned __int64)v16;
        v50[1] /= (unsigned __int64)v16;
        v50[2] /= (unsigned __int64)v16;
        v50[3] /= (unsigned __int64)v16;
        v50[6] /= (unsigned __int64)v16;
        v50[5] /= (unsigned __int64)v16;
        v50[9] /= (unsigned __int64)v16;
        v50[10] /= (unsigned __int64)v16;
        v50[11] /= (unsigned __int64)v16;
        v50[15] /= (unsigned __int64)v16;
        HIDWORD(v50[16]) /= v16;
        LODWORD(v50[17]) /= v16;
      }
      if ( v8 )
      {
        LODWORD(v50[18]) = v17 / v16;
        HIDWORD(v50[18]) = v15 / v16;
        v50[19] /= (unsigned __int64)v16;
        v50[20] /= (unsigned __int64)v16;
        v50[24] /= (unsigned __int64)v16;
      }
      if ( v4 )
        LODWORD(v50[23]) /= v16;
      RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v17);
      RtlInitUnicodeString(&Name, pszDest);
      v43.Data = v50;
      v43.Size = 200;
      return PcwAddInstance(v12, &Name, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v43);
    }
    while ( 1 )
    {
      KeQueryNodeActiveAffinity(v14, &Affinity, Count);
      Mask = Affinity.Mask;
      if ( Affinity.Mask )
      {
        memset(v49, 0, 0xC8uLL);
        v19 = Count[0];
        v20 = 0LL;
        v38 = 0;
        v21 = 0LL;
        v40 = 0LL;
        v41 = 0LL;
        if ( Count[0] )
        {
          while ( 1 )
          {
            FirstSetRightGroupAffinity = (unsigned int)KeFindFirstSetRightGroupAffinity((__int64)&Affinity);
            LOBYTE(v23) = v8;
            LOBYTE(v24) = v4;
            v25 = KiProcessorBlock[FirstSetRightGroupAffinity];
            v26 = ~*(_QWORD *)(v25 + 200);
            v27 = v26 & Mask;
            LOBYTE(v26) = v36;
            Affinity.Mask = v27;
            ExpQueryProcessorInformationCounters(v25, v26, v24, v23, (__int64)v51);
            LODWORD(Data) = v38;
            RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v37, Data);
            RtlInitUnicodeString(&Name, pszDest);
            v47.Size = 200;
            v47.Data = v51;
            result = PcwAddInstance(v12, &Name, FirstSetRightGroupAffinity, 1u, &v47);
            if ( result < 0 )
              return result;
            v49[11] += v51[11];
            v50[0] += v51[0];
            v50[1] += v51[1];
            v50[2] += v51[2];
            v50[3] += v51[3];
            LODWORD(v50[4]) += LODWORD(v51[4]);
            v50[6] += v51[6];
            HIDWORD(v50[7]) += HIDWORD(v51[7]);
            v49[14] += v51[14];
            v49[21] += v51[21];
            v49[22] += v51[22];
            v49[15] += v51[15];
            HIDWORD(v49[16]) += HIDWORD(v51[16]);
            LODWORD(v49[17]) += LODWORD(v51[17]);
            v41 += LODWORD(v51[18]);
            v40 += HIDWORD(v51[18]);
            v49[19] += v51[19];
            v49[20] += v51[20];
            v49[24] += v51[24];
            LODWORD(v49[23]) += LODWORD(v51[23]);
            v49[0] += v51[0];
            v49[1] += v51[1];
            v49[2] += v51[2];
            v49[3] += v51[3];
            LODWORD(v49[4]) += LODWORD(v51[4]);
            v49[6] += v51[6];
            HIDWORD(v49[7]) += HIDWORD(v51[7]);
            LODWORD(v49[8]) += LODWORD(v51[8]);
            v49[5] += v51[5];
            LODWORD(v49[7]) += LODWORD(v51[7]);
            v49[9] += v51[9];
            v49[12] += v51[12];
            v49[10] += v51[10];
            v49[13] += v51[13];
            HIDWORD(v49[23]) |= HIDWORD(v51[23]);
            LODWORD(v50[8]) += LODWORD(v51[8]);
            v50[5] += v51[5];
            LODWORD(v50[17]) += LODWORD(v51[17]);
            HIDWORD(v50[23]) |= HIDWORD(v51[23]);
            LODWORD(v50[7]) += LODWORD(v51[7]);
            v50[9] += v51[9];
            v50[12] += v51[12];
            v50[10] += v51[10];
            v50[13] += v51[13];
            HIDWORD(v50[16]) += HIDWORD(v51[16]);
            v15 = (unsigned __int64)v45.Data + HIDWORD(v51[18]);
            v50[20] += v51[20];
            v50[11] += v51[11];
            v50[14] += v51[14];
            v50[21] += v51[21];
            v50[22] += v51[22];
            v50[15] += v51[15];
            v43.Data = (char *)v43.Data + LODWORD(v51[18]);
            v50[19] += v51[19];
            v50[24] += v51[24];
            LODWORD(v50[23]) += LODWORD(v51[23]);
            v19 = Count[0];
            v4 = v34;
            v8 = v33;
            v12 = Buffer;
            Mask = Affinity.Mask;
            v45.Data = (const void *)v15;
            if ( ++v38 >= (unsigned int)Count[0] )
            {
              v20 = v40;
              v21 = v41;
              break;
            }
          }
        }
        if ( Count[0] > 1u )
        {
          v49[0] /= (unsigned __int64)Count[0];
          v49[1] /= (unsigned __int64)Count[0];
          v49[2] /= (unsigned __int64)Count[0];
          v49[3] /= (unsigned __int64)Count[0];
          v49[6] /= (unsigned __int64)Count[0];
          v49[5] /= (unsigned __int64)Count[0];
          v49[9] /= (unsigned __int64)Count[0];
          v49[10] /= (unsigned __int64)Count[0];
          v49[11] /= (unsigned __int64)Count[0];
          v49[15] /= (unsigned __int64)Count[0];
          HIDWORD(v49[16]) /= v19;
          LODWORD(v49[17]) /= v19;
        }
        v8 = v33;
        if ( v33 )
        {
          LODWORD(v49[18]) = v21 / Count[0];
          HIDWORD(v49[18]) = v20 / Count[0];
          v49[19] /= (unsigned __int64)Count[0];
          v49[20] /= (unsigned __int64)Count[0];
          v49[24] /= (unsigned __int64)Count[0];
        }
        v4 = v34;
        if ( v34 )
          LODWORD(v49[23]) /= v19;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v37);
        RtlInitUnicodeString(&Name, pszDest);
        v12 = Buffer;
        v48.Data = v49;
        v48.Size = 200;
        result = PcwAddInstance(Buffer, &Name, v37 + KeMaximumProcessors, 1u, &v48);
        if ( result < 0 )
          return result;
      }
      v14 = v37 + 1;
      v37 = v14;
      if ( v14 >= (unsigned __int16)KeNumberNodes )
      {
        v16 = v39;
        v17 = (unsigned __int64)v43.Data;
        goto LABEL_20;
      }
    }
  }
  v29 = *((unsigned int *)a2 + 4);
  if ( (unsigned int)v29 >= (unsigned int)KeNumberProcessors_0 )
    return -1073741275;
  v30 = v51;
  LOBYTE(v6) = v8;
  LOBYTE(v30) = v7;
  LOBYTE(v5) = v4;
  ExpQueryProcessorInformationCounters(KiProcessorBlock[v29], (_DWORD)v30, v5, v6, (__int64)v51);
  v31 = (const UNICODE_STRING *)a2[1];
  v45.Data = v51;
  v45.Size = 200;
  result = PcwAddInstance(v12, v31, v29, 1u, &v45);
  if ( result >= 0 )
    return 0;
  return result;
}
