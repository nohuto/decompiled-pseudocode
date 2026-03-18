/*
 * XREFs of ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0148F6C
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C007B980 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     Win32CreateSection @ 0x1C0021038 (Win32CreateSection.c)
 */

__int64 __fastcall AllocateKernelSection(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  ULONG_PTR ViewSize; // [rsp+58h] [rbp-8h] BYREF
  PVOID Section; // [rsp+80h] [rbp+20h] BYREF
  PVOID MappedBase; // [rsp+88h] [rbp+28h] BYREF

  MappedBase = 0LL;
  *a3 = 0LL;
  Section = 0LL;
  v4 = Win32CreateSection(&Section, 6LL);
  if ( v4 >= 0 )
  {
    ViewSize = 0LL;
    v4 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      *((_DWORD *)MappedBase + 2) = 1835166535;
      *(_QWORD *)MappedBase = Section;
      *a3 = (char *)MappedBase + 16;
    }
    else
    {
      ObfDereferenceObject(Section);
    }
  }
  return (unsigned int)v4;
}
