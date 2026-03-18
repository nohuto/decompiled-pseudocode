/*
 * XREFs of _GreScalingDispatchEscape@4 @ 0x1FD6BF
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _GreEscCreateScaledCompatibleBitmap@4 @ 0x1FD305 (_GreEscCreateScaledCompatibleBitmap@4.c)
 */

int __fastcall GreScalingDispatchEscape(char *a1)
{
  char *v2; // ecx
  _DWORD *v4; // esi
  _DWORD v5[8]; // [esp+10h] [ebp-3Ch] BYREF
  char *v6; // [esp+30h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  v6 = a1;
  memset(v5, 0, sizeof(v5));
  ms_exc.registration.TryLevel = 0;
  if ( ((unsigned __int8)a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v2 = a1 + 32;
  if ( (unsigned int)(a1 + 32) > _MmUserProbeAddress || v2 < a1 )
    *(_BYTE *)_MmUserProbeAddress = 0;
  qmemcpy(v5, a1, sizeof(v5));
  ms_exc.registration.TryLevel = -2;
  if ( v5[0] )
    return -1073741637;
  GreEscCreateScaledCompatibleBitmap((int)v5);
  ms_exc.registration.TryLevel = 1;
  if ( !v5[0] )
  {
    v4 = v6 + 8;
    ProbeForWrite(v6 + 8, 8u, 4u);
    *v4 = v5[2];
    v4[1] = v5[3];
  }
  return 0;
}
