/*
 * XREFs of _DDCCICleanUpWrap@0 @ 0xD4782
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall DDCCICleanUpWrap()
{
  PVOID v0; // esi
  unsigned int i; // edi
  void (__thiscall ***v2)(_DWORD, int); // ecx
  void *v3; // [esp+0h] [ebp-4h]

  v0 = P;
  if ( P )
  {
    OPM::CMutex::~CMutex((OPM::CMutex *)((char *)P + 20));
    for ( i = 0; i < *((_DWORD *)v0 + 3); ++i )
    {
      v2 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)v0 + 1) + 4 * i);
      if ( v2 )
      {
        (**v2)(v2, 1);
        *(_DWORD *)(*((_DWORD *)v0 + 1) + 4 * i) = 0;
      }
    }
    OPM::OPMFreeMemory(*((OPM **)v0 + 1), v3);
    OPM::CMutex::~CMutex((OPM::CMutex *)v0);
    ExFreePoolWithTag(v0, 0x63326947u);
  }
  P = 0;
}
