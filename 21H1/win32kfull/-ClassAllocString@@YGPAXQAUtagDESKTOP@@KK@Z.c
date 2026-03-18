/*
 * XREFs of ?ClassAllocString@@YGPAXQAUtagDESKTOP@@KK@Z @ 0x474CE
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

PVOID __userpurge ClassAllocString@<eax>(
        SIZE_T a1@<edx>,
        int a2@<ecx>,
        struct tagDESKTOP *const a3,
        unsigned int a4,
        unsigned int a5)
{
  if ( a2 )
    return RtlAllocateHeap(*(PVOID *)(a2 + 64), 0, a1);
  else
    return (PVOID)Win32AllocPoolZInit(a1, 1818456917);
}
