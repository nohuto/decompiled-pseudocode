/*
 * XREFs of sub_1801285E0 @ 0x1801285E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_1801285E0(__int64 a1, int a2, _DWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( a3 && (unsigned int)(a2 - 2) <= 0x1FFFE )
  {
    v10 = *(_QWORD *)(a1 + 48);
    *(double *)&v12 = (double)(a2 & 0x3FFFD | 2u);
    *a3 = *(_DWORD *)(v10 + 16LL * (unsigned int)((HIDWORD(v12) >> 20) - 1024) + 12);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = -2147024809;
      v14 = (__int64)"SpatialAudioDevicePropertyReader::GetStaticObjectVolume";
      LODWORD(v13) = 630;
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v8,
        v9,
        (const CHAR **)&v14,
        (__int64)&v13,
        (__int64)&v12);
    }
    return (unsigned int)-2147024809;
  }
  return v7;
}
