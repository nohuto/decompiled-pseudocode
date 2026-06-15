/*
 * XREFs of sub_18012B1F0 @ 0x18012B1F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18012B1F0(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // r12
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rdx
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  v7 = a2;
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = *(_QWORD *)(a1 + 48);
  if ( v14 )
  {
    if ( a3 && a4 && (v15 = a5) != 0LL && (unsigned int)v7 < 0x11 )
    {
      *a3 = *(_OWORD *)(v14 + 16 * v7);
      *a4 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7 + 4);
      *v15 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7 + 8);
      if ( a6 )
        *a6 = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 16 * v7 + 12);
    }
    else
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v19) = -2147024809;
        v18 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
        LODWORD(v17) = 500;
        sub_180109778(
          (__int64)&dword_18019C480,
          byte_18016C12C,
          v12,
          v13,
          (const CHAR **)&v18,
          (__int64)&v17,
          (__int64)&v19);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v19) = -2147418113;
      v18 = (__int64)"SpatialAudioEncoderProperties::GetEncoderStaticObjectPositionAndVolumeByIndex";
      LODWORD(v17) = 499;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v12,
        v13,
        (const CHAR **)&v18,
        (__int64)&v17,
        (__int64)&v19);
    }
    return (unsigned int)-2147418113;
  }
  return v11;
}
