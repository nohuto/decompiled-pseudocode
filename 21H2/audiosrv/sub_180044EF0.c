/*
 * XREFs of sub_180044EF0 @ 0x180044EF0
 * Callers:
 *     <none>
 * Callees:
 *     memcpy @ 0x18007443F (memcpy.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180044EF0(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  size_t v5; // r12
  unsigned int v9; // ebx
  const void *v10; // rdx
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+48h] [rbp-8h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v5 = a4;
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( !*(_DWORD *)(a1 + 512) )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = 687;
LABEL_13:
      v13 = (__int64)"SpatialAudioDevicePropertyReader::GetDeviceSettings";
      LODWORD(v14) = -2147418113;
      sub_180109778((int)&dword_18019C480, (__int64)&v13, (__int64)&v12, (__int64)&v14);
    }
    return (unsigned int)-2147418113;
  }
  if ( !a2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = 688;
LABEL_21:
      v13 = (__int64)"SpatialAudioDevicePropertyReader::GetDeviceSettings";
      LODWORD(v14) = -2147024809;
      sub_180109778((int)&dword_18019C480, (__int64)&v13, (__int64)&v12, (__int64)&v14);
    }
    return (unsigned int)-2147024809;
  }
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 432);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 448);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 464);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 480);
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 496);
  if ( (_DWORD)v5 )
  {
    v10 = *(const void **)(a1 + 504);
    if ( v10 )
    {
      if ( a3 && v5 == 834LL * *(unsigned int *)(a1 + 424) )
      {
        memcpy(a3, v10, v5);
        return v9;
      }
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v12) = 695;
        goto LABEL_21;
      }
      return (unsigned int)-2147024809;
    }
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v12) = 694;
      goto LABEL_13;
    }
    return (unsigned int)-2147418113;
  }
  return v9;
}
