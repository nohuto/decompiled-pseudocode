/*
 * XREFs of ??1AlpcPort@@UEAA@XZ @ 0x1800BF264
 * Callers:
 *     ??_GAlpcPort@@UEAAPEAXI@Z @ 0x1800BF4F0 (--_GAlpcPort@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z @ 0x1800BF530 (--_EAlpcSectionListEntry@AlpcPort@@UEAAPEAXI@Z.c)
 */

void __fastcall AlpcPort::~AlpcPort(AlpcPort *this)
{
  char *i; // rbx
  char *v3; // rax
  __int64 v4; // rcx
  char *v5; // rcx

  *(_QWORD *)this = &AlpcPort::`vftable';
  for ( i = (char *)this + 64; ; --*((_QWORD *)i + 2) )
  {
    v3 = *(char **)i;
    v4 = **(_QWORD **)i;
    if ( *(char **)(*(_QWORD *)i + 8LL) != i || *(char **)(v4 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)i = v4;
    *(_QWORD *)(v4 + 8) = i;
    if ( v3 == i )
      break;
    if ( v3 != (char *)8 )
      AlpcPort::AlpcSectionListEntry::`vector deleting destructor'((AlpcPort::AlpcSectionListEntry *)(v3 - 8), 1u);
  }
  v5 = (char *)*((_QWORD *)this + 7);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v5);
  SipcPort::~SipcPort(this);
}
