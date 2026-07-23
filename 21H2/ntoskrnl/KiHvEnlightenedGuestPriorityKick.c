/*
 * XREFs of KiHvEnlightenedGuestPriorityKick @ 0x1402D46E0
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14034EC10 (KiDeferredReadySingleThread.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  int v4; // r9d
  bool v5; // zf
  __int64 v6; // r8
  __int64 v7; // rcx

  result = (unsigned int)KiVelocityFlags;
  if ( (KiVelocityFlags & 2) != 0 )
  {
    result = *(_QWORD *)(a2 + 33976);
    if ( result )
    {
      if ( *(_QWORD *)(a1 + 33976) )
      {
        if ( a1 != a2 && a3 >= 8 )
        {
          v4 = *(_DWORD *)result;
          result = *(_DWORD *)result & 0x40000;
          if ( (v4 & 0x100000) != 0 || (_DWORD)result && (result = (unsigned __int8)v4, (unsigned __int8)v4 < a3) )
          {
            v5 = HvlpVirtualProcessorsIdentityMapped == 0;
            v6 = *(_QWORD *)(a1 + 33976);
            *(_DWORD *)(v6 + 12) = 2;
            v7 = *(unsigned int *)(a2 + 36);
            if ( v5 )
              LODWORD(v7) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v7 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v7] << 6);
            *(_DWORD *)(v6 + 8) = v7;
            result = (unsigned int)v7;
            __writemsr(0x400000C2u, (unsigned int)v7);
          }
        }
      }
    }
  }
  return result;
}
