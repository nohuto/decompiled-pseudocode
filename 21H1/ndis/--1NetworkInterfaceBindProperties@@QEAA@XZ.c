/*
 * XREFs of ??1NetworkInterfaceBindProperties@@QEAA@XZ @ 0x1C00ABE18
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012475C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NetworkInterfaceBindProperties::~NetworkInterfaceBindProperties(NetworkInterfaceBindProperties *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = (void *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x7272414Bu);
    *((_QWORD *)this + 7) = 0LL;
    *((_DWORD *)this + 13) = 0;
    *((_DWORD *)this + 12) = 0;
  }
  v3 = (void *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x7272414Bu);
    *((_QWORD *)this + 5) = 0LL;
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 8) = 0;
  }
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0x7272414Bu);
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 4) = 0;
  }
}
