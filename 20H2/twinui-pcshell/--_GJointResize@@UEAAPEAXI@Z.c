/*
 * XREFs of ??_GJointResize@@UEAAPEAXI@Z @ 0x18041CA14
 * Callers:
 *     ??_EJointResize@@WBI@EAAPEAXI@Z @ 0x180100010 (--_EJointResize@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008D7A4 (--3@YAXPEAX@Z.c)
 *     ??1JointResize@@UEAA@XZ @ 0x18041C5E0 (--1JointResize@@UEAA@XZ.c)
 */

JointResize *__fastcall JointResize::`scalar deleting destructor'(JointResize *this, char a2)
{
  JointResize::~JointResize(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
